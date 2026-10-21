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
    float p , r , t , ci;
    
    printf("enter principal amount: ");
    scanf("%f",&p);
    
    printf("enter rate of interest: ");
    scanf("%f",&r);

    printf("enter time period: ");
    scanf("%f",&t);
    
    ci = p * pow(1 + r / 100 , t) - p;
    
    printf("compound interest = %.2f\n",ci);

    return 0;
}
