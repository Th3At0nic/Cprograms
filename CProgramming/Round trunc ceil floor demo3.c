#include<stdio.h>
#include<math.h>
int main()

{
    double x, result;
    printf("Enter x: ");
    scanf("%lf", &x);

    result = ceil(x);

    printf("ceil %lf = %lf", x, result);

    return 0;
}
