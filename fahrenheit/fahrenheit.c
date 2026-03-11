#include<stdio.h>
int main(void){
    int fahrenheit, celsius;
    printf("enter the temperature in fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius=(fahrenheit-32)/1.8;
    printf("the temperature in celsius is %d", celsius);    
    return 0;
}