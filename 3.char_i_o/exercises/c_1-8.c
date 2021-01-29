/*

Exercise 1-8: "Write a program to count blanks, tabs and newlines."

*/

#include <stdio.h>

int main()
{
    
    long lc = 0, bc = 0, tc = 0;

    int c;

    while((c = getchar()) != EOF){

        if(c == '\n'){
            lc++;
        }else if(c == '\t'){
            tc++;
        }else if(c == ' '){
            bc++;
        }
    }

    printf("New lines: %ld; Tabs: %ld; Blanks: %ld", lc, tc, bc);

    return 0;
}
