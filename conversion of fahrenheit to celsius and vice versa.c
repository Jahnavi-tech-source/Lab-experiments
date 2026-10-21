/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float celsius , fahrenheit;
    
    printf("enter temperature in celsius: ");
    scanf("%f",&celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("temperature in fahrenheit = %.2f", fahrenheit);

    printf("enter temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit -32) * 5/ 9;
    printf("temperature in celsius = %.2f", celsius);
 
    return 0;
}
