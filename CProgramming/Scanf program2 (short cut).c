/*
write a program that takes three integers at a time from user and print that together.
*/


#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Please enter three integers:\n");

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Numbers are: %d, %d, %d", num1, num2, num3);


    return 0;
}
