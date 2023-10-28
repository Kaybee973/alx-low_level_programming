C libraries

Libraries are one of the many tools that compilers have. A library is a file that contains object files, that can be loaded and used as a single unit in the linking phase of a program. Libraries are indexed, in order to facilitate finding functions, variables and other symbols, resulting in a faster linking. (UPC, n.d.).

In most Unix systems we are allowed to create and use two approaches of libraries - static and shared (or dynamic) libraries.

Static libraries

Static libraries (archived files) are collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime. Only the executable file is needed in order to run the program.

The tool used to create a static library is a program called 'ar', for 'archiver'. This program can be used to create static libraries, modify object files in the static library, list the names of object files in the library, and so on
