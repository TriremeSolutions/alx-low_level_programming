0-preprocessor: runs a C file through the preprocessor and save the result into another file.

1-compiler: compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.

2-assembler: generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.

3-name: compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE

4-puts.c: prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

The function puts is used
printf is not used
Program ends with the value 0


5-printf.c: prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

The function printf is used
The function puts is not to be used
program returns 0
program should compile without warning when using the -Wall gcc option

