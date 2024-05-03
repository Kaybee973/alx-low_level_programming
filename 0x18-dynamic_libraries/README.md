How to Create a Dynamic Library in C and How to use it
part2
Mildred Makori
Mildred Makori

·
Follow

2 min read
·
Feb 16, 2022
23


1






Dynamic Library Creation
Dynamic Linking does not require the code to be copied, it is done by just placing the name of the library in the binary file. The actual linking happens when the program is run, — when both the binary file and the library are in memory.

Steps to Create a Dynamic library

step1: Create the header file.


calc.h (Header file )
step2: Create a C file(s) that contains functions in your library.

You can create as many .c files as you want. we just created one file for simplicity reasons.


lib_sub.c file (source code)
step3: Create the main.c file where we should call/run our function from and parse in some values.


main.c file
step4: Create the object files

We will Create the object files using this single command on your terminal;

gcc -c lib_add.c -fPIC then hit return/enter.

Remember to create an object file for the main.c file also. hence you can use the below command for multiple .c

Note in case of multiple .c files, use:

gcc -c *.c -fPIC then hit return/enter.

Note: The -fPIC flag ensures that the code is position-independent. This means it wouldn’t matter where the computer loads the code into memory. The -c options just ensure that each .o object file isn’t linked yet.

step4: Create a Dynamic Library from this object code

We will use a single command;

gcc lib_add.o -shared -o lib_calc.so

Remember, for multiple .c files use:

gcc *.o -shared -o lib_calc.so Then hit return/enter

The wildcard * tells the compiler to compile all the .o object files into a dynamic library which is specified by the -shared flag. The naming convention for dynamic libraries is such that each shared library name must start with lib and end with .so.

Using Dynamic Libraries:
Remember our main.c file, yees, that will be our driver file.

First: We need to Link our Dynamic Library to our executable file by using this command:

gcc -o main main.o -L. -l calc

Second: We need to make sure that our library is in the correct PATH or rather where we need it to be by using the following command.

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH

Or

export LD_LIBRARY_PATH=:/your/custom/path/

Third: Now we can run our executable main file.

