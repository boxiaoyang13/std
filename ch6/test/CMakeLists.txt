#Make 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (Demo1)

#查找源文件
aux_source_directory(. DIR_SRCS)

#添加lib子目录
add_subdirectory(lib)

# 指定生成目标
add_executable(hello ${DIR_SRCS})

#添加链接库
target_link_libraries(hello print)
