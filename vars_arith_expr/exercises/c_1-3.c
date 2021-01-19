/*

Exercise 1-3

"Modify the temperature conversion program to print a header before the table."

*/

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 2;

    fahr = step;
    while(fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius); 
        fahr += step;
    }
    
    return 0;
}