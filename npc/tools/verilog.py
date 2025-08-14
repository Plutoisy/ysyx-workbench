import os
import re

def process_files(folder_path):
    # 获取文件夹中的所有文件
    files = [f for f in os.listdir(folder_path) if os.path.isfile(os.path.join(folder_path, f))]
    
    for file_name in files:
        file_path = os.path.join(folder_path, file_name)
        
        # 尝试打开文件并进行处理
        try:
            with open(file_path, 'r', encoding='utf-8') as file:
                lines = file.readlines()
            
            # 标记是否在dpic区域内
            in_dpic_section = False
            modified = False
            
            # 处理每一行
            for i in range(len(lines)):
                # 检查是否是dpic区域的边界线
                if "//======================dpic========================//" in lines[i]:
                    in_dpic_section = not in_dpic_section
                    if in_dpic_section:  # 如果是开始边界
                        continue
                
                # 如果在dpic区域内，或者是以import "DPI-C"开头的行
                if (in_dpic_section or lines[i].strip().startswith('import "DPI-C"')) and not lines[i].strip().startswith('//'):
                    lines[i] = "//" + lines[i]
                    modified = True
            
            # 只有在文件被修改的情况下才写回
            if modified:
                with open(file_path, 'w', encoding='utf-8') as file:
                    file.writelines(lines)
                print(f"处理文件: {file_name}")
            
        except Exception as e:
            print(f"处理文件 {file_name} 时出错: {e}")

def remove_comments_and_empty_lines(content):
    # 删除单行注释
    content = re.sub(r'//.*', '', content)
    # 删除多行注释
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    # 删除空行
    content = re.sub(r'\n\s*\n', '\n', content)
    return content

def merge_v_files(directory, output_file):
    with open(output_file, 'w') as outfile:
        for filename in os.listdir(directory):
            if filename.endswith('.v'):
                file_path = os.path.join(directory, filename)
                with open(file_path, 'r') as infile:
                    content = infile.read()
                    clean_content = remove_comments_and_empty_lines(content)
                    outfile.write(clean_content)
                    outfile.write('\n')  # Add a newline to separate files


# 使用示例
if __name__ == "__main__":
    process_files("/home/plutoisy/ysyx-workbench/npc/vsrc_no_dpic/")
    merge_v_files('/home/plutoisy/ysyx-workbench/npc/vsrc_no_dpic/', '/home/plutoisy/ysyx-workbench/npc/build/ysyx_24120011.v')
    print("处理完成！")

