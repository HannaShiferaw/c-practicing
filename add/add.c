#include <stdio.h>
int main(void){
    int a,b,sum;
    printf("enter two numbers");
    scanf("%d%d", &a,&b);
printf("the numbers you entered are %d and %d", a,b);
    sum=a+b;
    printf("the sum of %d and %d is %d", a,b,sum);
    return 0;
}