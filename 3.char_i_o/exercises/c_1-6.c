/*

Exercise 1-6: "Verify thet the expression getchar() != EOF is 0 or 1"

*/

#include <stdio.h>

int main()
{

    int c;

    while(1){
        c = (getchar() != EOF);
        printf("%d\n", c);
    }

    return 0;
}
