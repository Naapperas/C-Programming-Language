/*

Exercise 1-9: "Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank."

*/

#include <stdio.h>

int main()
{
    int c;
    short isBlank = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            if(isBlank)
                continue;
            putchar(c);
            isBlank = 1;
        }else{
            putchar(c);
            if(isBlank)
                isBlank = 0;
        }
    }
    return 0;
}
