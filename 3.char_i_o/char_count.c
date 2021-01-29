#include <stdio.h>

int main() // char count using for
{

    long nc;

    for (nc = 0; getchar() != EOF; nc++);

    printf("%ld\n", nc);

    return 0;
}



/* char count using while
int main()
{
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    
    printf("%ld\n",nc);

    return 0;
}
*/