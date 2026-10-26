
#include <stdio.h>

int main()
{
    int m1 , m2 , m3 , m4 , m5 , total;
    float average;
    
    printf("enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    
    printf("total marks =%d\n",total);
    printf("average marks =%.2f\n",average);

    return 0;
}
