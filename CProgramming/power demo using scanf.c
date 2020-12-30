//write a program that takes input from user and display using any power number

#include<stdio.h>
int main()

{
    int x,y;
    double result;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    result = pow (x,y);

    printf("Result is: %.2lf", result);

    return 0;
}
