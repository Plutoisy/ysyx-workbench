#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

Elf32_Shdr *symtab = NULL;
Elf32_Shdr *strtab = NULL;
FILE *file = NULL;

char* find_function_name(uint32_t addr) {

    fseek(file, symtab->sh_offset, SEEK_SET);
    int num_symbols = symtab->sh_size / symtab->sh_entsize;
    Elf32_Sym *symbols = malloc(symtab->sh_size);
    
    if(fread(symbols, symtab->sh_size, 1, file) != 1){
        perror("fread");
    }

    char *strtab_data = malloc(strtab->sh_size);
    fseek(file, strtab->sh_offset, SEEK_SET);

    if(fread(strtab_data, strtab->sh_size, 1, file) != 1){
        perror("fread");
    }
    

    char *result = NULL;
    for (int i = 0; i < num_symbols; i++) {
        if (symbols[i].st_value == addr && symbols[i].st_info != 0) {
            result = strdup(&strtab_data[symbols[i].st_name]);
            break;
        }
    }

    free(symbols);
    free(strtab_data);
    return result;
}

void init_elf(const char *elf_file){
    file = fopen(elf_file, "rb");
    if (!file) {
        perror("fopen");
    }

    Elf32_Ehdr ehdr;
    if(fread(&ehdr, sizeof(ehdr), 1, file) != 1){
        perror("fread");
    }
    

    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Not an ELF file\n");
        fclose(file);
    }

    fseek(file, ehdr.e_shoff, SEEK_SET);
    Elf32_Shdr *shdrs = malloc(ehdr.e_shentsize * ehdr.e_shnum);

    if(fread(shdrs, ehdr.e_shentsize, ehdr.e_shnum, file) != 1){
        perror("fread");
    }

    for (int i = 0; i < ehdr.e_shnum; i++) {
        if (shdrs[i].sh_type == SHT_SYMTAB) {
            symtab = &shdrs[i];
        } else if (shdrs[i].sh_type == SHT_STRTAB && i != ehdr.e_shstrndx) {
            strtab = &shdrs[i];
        }
    }
}

// int main(int argc, char **argv) {
//     if (argc != 3) {
//         fprintf(stderr, "Usage: %s <ELF file> <address>\n", argv[0]);
//         return EXIT_FAILURE;
//     }

//     FILE *file = fopen(argv[1], "rb");
//     if (!file) {
//         perror("fopen");
//         return EXIT_FAILURE;
//     }

//     Elf32_Addr addr = (Elf32_Addr)strtoul(argv[2], NULL, 0);

//     Elf32_Ehdr ehdr;
//     fread(&ehdr, sizeof(ehdr), 1, file);

//     if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
//         fprintf(stderr, "Not an ELF file\n");
//         fclose(file);
//         return EXIT_FAILURE;
//     }

//     fseek(file, ehdr.e_shoff, SEEK_SET);
//     Elf32_Shdr *shdrs = malloc(ehdr.e_shentsize * ehdr.e_shnum);
//     fread(shdrs, ehdr.e_shentsize, ehdr.e_shnum, file);

//     Elf32_Shdr *symtab = NULL;
//     Elf32_Shdr *strtab = NULL;

//     for (int i = 0; i < ehdr.e_shnum; i++) {
//         if (shdrs[i].sh_type == SHT_SYMTAB) {
//             symtab = &shdrs[i];
//         } else if (shdrs[i].sh_type == SHT_STRTAB && i != ehdr.e_shstrndx) {
//             strtab = &shdrs[i];
//         }
//     }

//     if (symtab && strtab) {
//         char *symbol_name = parse_symtab(file, symtab, strtab, addr);
//         if (symbol_name) {
//             printf("Found symbol: %s\n", symbol_name);
//             free(symbol_name);
//         } else {
//             printf("No symbol found at address 0x%x\n", addr);
//         }
//     } else {
//         fprintf(stderr, "No symbol table found\n");
//     }

//     free(shdrs);
//     fclose(file);
//     return EXIT_SUCCESS;
// }
