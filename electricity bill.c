/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int units;
    float bill;
    
    printf("enter units consumed: ");
    scanf("%d",&units);
    
    if(units < 0)
       printf("invalid units");
    else if(units <= 100)
       bill = units * 1.50;
    else if(units <= 200)
       bill = units * 2.50;
    else if(units <= 500)
       bill = units * 4.00;
    else 
       bill = units * 6.00;
       
    if(units >= 0)
       printf("total electricity bill = Rs. %.2f",bill);

    return 0;
}
