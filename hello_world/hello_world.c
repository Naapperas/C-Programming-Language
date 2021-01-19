#include <stdio.h> // include the standard I/O library

int main() // the main function to be called
{
    printf("Hello World!\n"); // print the string, \n inserts a new line because printf won't do it automaticaly
    return 0; //must include a return type, since main is an int function 
}

/*
Exercise 1-2:

"Experiment to find out what happens when you add \c, where c is a character not included in the ones listed above."

int main() // the main function to be called
{
    printf("Hello World!yn"); // print the string
    return 0; //must include a return type, since main is an int function 
}

hello_world.c: In function ‘main’:
hello_world.c:5:12: warning: unknown escape sequence: '\y'
    5 |     printf("Hello World!\y"); // print the string
      |            ^~~~~~~~~~~~~~~~

*/