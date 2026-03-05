#include<stdio.h>
#define PI 3.14
int main(void){

    double radius=0.0, area=0.0;
    printf("enter radius of the circle");
    scanf("%lf",&radius);
    area=PI*radius*radius;
    printf("the area of the circle with %lf radius is %lf", radius, area);
    return 0;
        
}