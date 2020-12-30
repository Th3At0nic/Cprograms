#include<stdio.h>
#include<math.h>
int main()

{
    double x, result;
    printf("Enter x: ");
    scanf("%lf", &x);

    result = trunc(x);

    printf("trunc %lf = %lf", x, result);

    return 0;
}
