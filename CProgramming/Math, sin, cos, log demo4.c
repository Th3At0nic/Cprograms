#include<stdio.h>
#include<math.h>

int main()

{
    double x, result;
    printf("Enter x: ");
    scanf("%lf", &x);

    result = cos(x);

    printf("cos(%lf) = %lf\n", x, result);

    return 0;
}
