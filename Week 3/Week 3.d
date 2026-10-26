
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
