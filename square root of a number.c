/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    float num  , result;
    
    printf("enter a number: ");
    scanf("%f",&num);
    
    if(num >= 0)
    {
        result = sqrt(num);
        printf("square root = %.2f\n",result);
    }
    else
    {
        printf("square root of a negative number is not a real number");
    }

    return 0;
}
