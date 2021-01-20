/*

Exercise 1-4

"Write a porgram to print the corresponding Celsius to Fahrenheit table."

*/
#include <stdio.h>

int main(){

    float fahr;
    int celsius, start, stop, step;

    start = 0;
    stop = 300;
    step = 2;

    celsius = step;
    while(celsius <= stop){
        fahr = (9.0/5.0) * celsius + 32;
        printf("%d\t%f\n", celsius, fahr);
        celsius += step;
    }

}