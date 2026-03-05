#include<stdio.h>
int main(void){
    int miles=26, yards=385;
    double kilometers=0.0;
    kilometers=1.609*(miles+yards/1760.0);
    printf("the distance of a marathon in kilometers is %lf", kilometers);
    return 0;
}