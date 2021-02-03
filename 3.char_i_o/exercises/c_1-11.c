/*

Exercise 1-11: "How would you teste the word count program? What kinds of input are most likely to uncover bugs if there are any ?."

*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    
    int nc, nl, nw;

    nc = nl = nw = 0;

    int result = count(&nc, &nl, &nw);


    return 0;
}


int count(int* nc, int* nl, int* nw)
{
    int c, nl, nw, nc, state;

    state = OUT;

    while ((c = getchar()) != EOF)
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
    
    //printf("%d\t%d\t%d\n", nl, nc, nw);

    return 0;
}