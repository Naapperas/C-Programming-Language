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
        celsius = (5.0 / 9.0) * (fahr - 32); // integer division truncates: this means that 5/9 would become 0, making all celsius values efectively 0. Here we can to the division since we are working in floating point arithmetic
        printf("%3.0f %6.1f\n", fahr, celsius); // %f specifies floating point argument, \t inserts a tab. Specifying a number on the % part of the format string specfies the minimum length to print the argument
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