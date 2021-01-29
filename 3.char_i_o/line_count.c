#include <stdio.h>

int main()
{
    
    long lc;
    int c;

    lc = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            lc++;

    printf("%ld\n", lc);

    return 0;
}
