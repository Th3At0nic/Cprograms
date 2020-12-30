/*
Write a program that takes floating numbers from user
and print that.
*/

#include<stdio.h>
int main()

{
    float num1, num2, num3;
    printf("Please enter float numbers:\n");
    scanf("%f %f %f",&num1, &num2, &num3);

    printf("Numbers are: %.2f, %.2f, %.2f",num1, num2, num3);

    return 0;
}


