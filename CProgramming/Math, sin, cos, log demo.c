#include<stdio.h>
#include<math.h>

int main()

{
    int x;
    double result;
    printf("Enter x: ");
    scanf("%d", &x);

    result = log(x);

    printf("log(%d) = %lf\n", x, result);

    return 0;
}
