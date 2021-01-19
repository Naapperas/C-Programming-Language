#include <stdio.h>

int main() // floating point version, more precise
{
    float fahr, celsius; // variables must be declared before they are used
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 2;

    fahr = step;
    while(fahr <= upper){ // while loop, 'while' the condition is met, execute the code inside brackets
        celsius = 5 * (fahr - 32) / 9; // integer division truncates: this means that 5/9 would become 0, making all celsius values efectively 0
        printf("%f\t%f\n", fahr, celsius); // %f specifies floating point argument, \t inserts a tab
        fahr += step;
    }
    
    return 0;
}

/* Integer version of the program, not accurate for temperatures
int main()
{
    int fahr, celsius; 
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 2;

    fahr = step;
    while(fahr <= upper){ 
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius); // %d specifies integer argument, \t inserts a tab
        fahr += step;
    }
    
    return 0;
}*/

/*

Exercise 1-3


*/
