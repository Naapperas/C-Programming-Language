/*
Exercise 1-2:

"Experiment to find out what happens when you add \c, where c is a character not included in the ones listed above."

*/

#include <stdio.h>

int main()
{
    printf("Hello World!yn");
    return 0;
}

/*
hello_world.c: In function ‘main’:
hello_world.c:5:12: warning: unknown escape sequence: '\y'
    5 |     printf("Hello World!\y"); // print the string
      |            ^~~~~~~~~~~~~~~~

*/