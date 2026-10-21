/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a , b , c , max;
    
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    
     max = (a > b) ? ((a > c) ? a:c) : ((b > c) ? b : c);
     printf("maximum number = %d\n",max);
     

    return 0;
}
