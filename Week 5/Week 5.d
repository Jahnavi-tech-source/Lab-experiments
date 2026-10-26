
#include <stdio.h>

int main()
{
    float a , b , result;
    int choice;
    
    printf("enter two numbers: ");
    scanf("%f %f",&a,&b);
    
    printf("\n1. addition");
    printf("\n2. subtraction");
    printf("\n3. multiplication");
    printf("\n4. division");
    
    printf("enter your choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1 :
           result = a + b;
           printf("result = %.2f",result);
           break;
           
        case 2 :
           result = a - b;
           printf("result = %.2f",result);
           break;
           
        case 3 :
           result = a * b;
           printf("result = %.2f",result);
           break;
           
        case 4:
           if(b==0)
           printf("division by zero is not possible");
           else
           {
               result = a / b;
               printf("result = %.2f",result);
               break;
           }
            
            default:
               printf("invalid option");
    }
    return 0;
}
