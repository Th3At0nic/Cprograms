#include<stdio.h>
#include<math.h>

int main()

{
    double x, result;
    printf("Enter x: ");

    scanf("%lf", &x);

    result = exp(x);

    printf("exp(%lf) = %lf\n", x, result);


    return 0;
}
