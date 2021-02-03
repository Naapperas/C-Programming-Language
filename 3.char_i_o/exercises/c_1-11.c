/*

Exercise 1-11: "How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any ?."

*/

#include <stdio.h>

#define IN 1
#define OUT 0

int count(int* nc, int* nl, int* nw, char input[]);

int main()
{
    int nc, nl, nw;

    nc = nw = 0;
    nl = 1;

    char input[] = "This is the input\nto be tested by the function";

    int result = count(&nc, &nl, &nw, input);

    printf("Correct characters: %d ; Correct lines: %d; Correct words: %d.\n", nc == 46, nl == 2, nw == 10);

    return 0;
}


int count(int* nc, int* nl, int* nw, char input[])
{

    int c, state;

    state = OUT;

    int i = 0;

    while ((c = input[i++]) != '\0')
    {
        ++(*nc);
        if(c == '\n')
            ++(*nl);
        
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++(*nw);
        }
    }

    return 0;
}