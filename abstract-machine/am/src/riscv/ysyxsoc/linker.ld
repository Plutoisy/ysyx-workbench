ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }
MEMORY
{
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 0x2000
}
SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  }
  .data : {
    *(.data)
  } : data
  edata = .;
  _data = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
  /* 设置程序结束位置 */
  end = .;
  _end = .;
  /* 堆区起始地址 */
  _heap_start = ORIGIN(SRAM);

  /* 栈区顶的初始值 */
  _stack_top = ORIGIN(SRAM) + LENGTH(SRAM);

  /* 设置当前地址为栈顶 */
  . = _stack_top;

  /* 设置堆栈指针 */
  _stack_pointer = .;

  /* 设置堆区结束地址（即栈区的起始地址） */
  _heap_end = _stack_top;

  
}
