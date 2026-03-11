

#include <stdio.h>
#include <math.h>
double computeSine(double x)
{
    return sin(x);
}

int main()
{
    double x;
    double result;

    printf("Enter a number between 0 and 1 (not inclusive): ");
    scanf("%lf", &x);
    if (x <= 0 || x >= 1)
    {
        printf("Error: value must be between 0 and 1.\n");
        return 1;
    }

    result = computeSine(x);

    printf("sin(%lf) = %lf\n", x, result);

    return 0;
}