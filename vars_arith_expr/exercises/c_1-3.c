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

    printf("Fahreneit\tCelsius\n");

    while(fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%5.0f\t\t%6.1f\n", fahr, celsius); 
        fahr += step;
    }
    
    return 0;
}