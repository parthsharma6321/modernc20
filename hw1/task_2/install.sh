INSTALL Instruction for library

Add These lines to CMakeLists.txt

Create Directory Install on Source Folder

install(TARGETS ipb_arithmetic
        DESTINATION /home/parth/modernc20/hw1/task_2/install/lib)

install(FILES /home/parth/modernc20/hw1/task_2/include/ipb_arithmetic.hpp
        DESTINATION /home/parth/modernc20/hw1/task_2/install/include)

install(FILES /home/parth/modernc20/hw1/task_2/include/ipb_arithmetic/sum.hpp /home/parth/modernc20/hw1/task_2/include/ipb_arithmetic/subtract.hpp
        DESTINATION /home/parth/modernc20/hw1/task_2/install/include/ipb_arithmetic)

Then Run cmake from terminal
And Finally make install