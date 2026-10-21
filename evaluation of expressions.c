/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A = 10 , B = 5 , C = 2 , D = 4 , E = 3 , F = 2 , G = 6;
    int i = 5 , J;
    int result1 , result2;
    
    result1 = A + B * C +( D * E) + F * G;
    result2 = A / B * C - B + A * D / 3;
    
    printf("a.  A + B * C +( D * E) + F * G = %d\n",result1);
    printf("b.  A / B * C - B + A * D / 3 = %d\n",result2);
    
    printf("c. A+++B---A: undefined behaviour in C\n");
    
    J = (i++) + (++i);
    printf("d. J = (i++) + (++i) = %d\n",J);
    return 0;
}
