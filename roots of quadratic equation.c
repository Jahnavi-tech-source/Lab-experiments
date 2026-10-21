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
    float a , b , c , d , r1 , r2 , real , imag;
    
    printf("enter coefficients a , b , c: ");
    scanf("%f %f %f",&a,&b,&c);
    
    if(a==0)
    {
        printf("not a quadratic equation");
    
    }
    else 
    {
        d = b * b - 4 * a * c;
        
        if(d > 0)
        {
            r1 = (-b + sqrt((d)) / ( 2 * a));
            r2 = (-b - sqrt((d)) / ( 2 * a));
            
            printf("two distint real roots: %.2f",r1,r2);
        }
        else if (d==0)
        {
            r1 = -b / 2 * a;
            
            printf("two equal roots: %.2f",r1);
        }
        else
        {
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * a);
            
            printf("complex roots: %.2f + %.2f and %.2f - %.2f",real,imag,real,imag);
        }
    }
    return 0;
}
