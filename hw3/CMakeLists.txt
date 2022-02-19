cmake_minimum_required(VERSION 3.16)
project(hw3)

set(CMAKE_CXX_STANDARD 20)

include_directories(/home/parth/modernc20/hw3/api)

add_library(html_writer /home/parth/modernc20/hw3/src/html_writer.cpp)
add_library(image_browser /home/parth/modernc20/hw3/src/image_browser.cpp)
add_executable(main /home/parth/modernc20/hw3/src/main.cpp)
target_link_libraries(html_writer image_browser)
