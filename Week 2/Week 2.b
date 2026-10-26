
#include <stdio.h>

int main()
{
    float celsius , fahrenheit;
    
    printf("enter temperature in celsius: ");
    scanf("%f",&celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("temperature in fahrenheit = %.2f", fahrenheit);

    printf("enter temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit -32) * 5/ 9;
    printf("temperature in celsius = %.2f", celsius);
 
    return 0;
}
