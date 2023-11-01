Memory allocation in C

There are three functions in the standard library that allow you as the programmer to work with memory: malloc(), calloc(), and realloc(). To use them, include the standard library at the top of your file: #include <stdlib.h>

Memory allocation: malloc()

malloc() is the simplest standard library function that allocates memory at runtime. The number of bytes to be allocated is the argument, and it returns the address of the first byte of memory that it allocated. Because the return value is a memory address, it is declared as a variable to store the return value, which can only be a pointer (because only pointers can store memory addresses).
