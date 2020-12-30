/*
write a program that takes input and display substraction, summation, multiplication,
dividation and remainder.
*/
#include<stdio.h>
int main()

{
    int num1, num2, result;
    printf("Enter two integer: \n");
    scanf("%d\n %d", &num1, &num2);

    result = num1+num2;
    printf("Summation: %d\n",result);

    result = num1-num2;
    printf("Subtraction: %d\n",result);

    result = num1*num2;
    printf("Multiplication: %d\n",result);

    result = num1/num2;
    printf("Dividation: %d\n",result);

    result = num1%num2;
    printf("Remainder: %d\n",result);


    return 0;
}
