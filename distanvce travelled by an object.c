/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float speed , time , distance;
    
    printf("enter speed of the object: ");
    scanf("%f",&speed);
    
    printf("enter tme taken: ");
    scanf("%f",&time);
    
    distance = speed * time;
    
    printf("distance travelled = %.2f\n",distance);


    return 0;
}
