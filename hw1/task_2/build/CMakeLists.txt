cmake_minimum_required(VERSION 3.16)
project(task_2)

set(CMAKE_CXX_STANDARD 20)

include_directories(/home/parth/modernc20/hw1/task_2/include)

add_library(ipb_arithmetic /home/parth/modernc20/hw1/task_2/src/subtract.cpp 
                           /home/parth/modernc20/hw1/task_2/src/sum.cpp)

add_executable(main /home/parth/modernc20/hw1/task_2/src/main.cpp)

target_link_libraries(main ipb_arithmetic)

