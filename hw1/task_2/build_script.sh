parth@parth-MS-7C52:~/modernc20/hw1/task_2$ cd src
parth@parth-MS-7C52:~/modernc20/hw1/task_2/src$ mkdir build && cd build
parth@parth-MS-7C52:~/modernc20/hw1/task_2/src/build$ c++ -c -I/home/parth/modernc20/hw1/task_2/include /home/parth/modernc20/hw1/task_2/src/subtract.cpp
parth@parth-MS-7C52:~/modernc20/hw1/task_2/src/build$ c++ -c -I/home/parth/modernc20/hw1/task_2/include /home/parth/modernc20/hw1/task_2/src/sum.cpp
parth@parth-MS-7C52:~/modernc20/hw1/task_2/src/build$ ar rcs libipb_arithmetic.a sum.o subtract.o
parth@parth-MS-7C52:~/modernc20/hw1/task_2/src/build$ c++ -I/home/parth/modernc20/hw1/task_2/include /home/parth/modernc20/hw1/task_2/src/main.cpp -L . -lipb_arithmetic -o main
parth@parth-MS-7C52:~/modernc20/hw1/task_2/src/build$ ./main
The sum of 1+2 = 3
The sub of 1-2 = -1
parth@parth-MS-7C52:~/modernc20/hw1/task_2/src/build$ mv main /home/parth/modernc20/hw1/task_2/results
