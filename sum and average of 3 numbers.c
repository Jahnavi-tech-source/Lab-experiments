/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a , b , c , sum;
    float average;
    
    printf("enter three numbers: ");
    scanf("%d %d %d" , &a , &b , &c);
    
    sum = a + b + c;
    average = sum / 3;
    
    printf("sum = %d\n" , sum);
    printf("average = %.2f\n" , average);


    return 0;
}
