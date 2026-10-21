/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a , b , c , d , max , min;
    
    printf("enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if(b > a)
      max = b;
    else 
      min = a;
    
    if(c > d)
    {
        if(c > max)
           max = c;
    }
    else 
    {
        if(d > max)
           max = d;
    }
    
    if(a < b)
      min = a;
    else 
      min = b;
      
    if(c < d) 
    {
        if(c < min)
          min = c;
    }
    else
    { 
        if(d < min)
          min = d;
    }
    
    printf("maximum = %d\n",max);
    printf("minimum = %d\n",min);

    return 0;
}
