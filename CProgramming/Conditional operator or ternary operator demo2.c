// conditional operator also called ternary operator

#include<stdio.h>
int main()

{
    int num1, num2, small;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    small = num1<num2 ? num1: num2;
    printf("Small number is: %d", small);

    return 0;
}

