/*
write a c program that takes 4 numbers from user and
swap it between num1 & num2, num3 and num4.
*/

#include<stdio.h>
void main()

{
    float num1, num2, num3, num4, temp1, temp2;

    printf("Enter number1: ");
    scanf("%f", &num1);

    printf("Enter number2: ");
    scanf("%f", &num2);

    printf("Enter number3: ");
    scanf("%f", &num3);

    printf("Enter number4: ");
    scanf("%f", &num4);

    temp1 = num1;
    num1 = num2;
    num2 = temp1;

    temp2 = num3;
    num3 = num4;
    num4 = temp2;


    printf("Number1 is: %.2f\n", num1);
    printf("Number2 is: %.2f\n", num2);
    printf("Number3 is: %.2f\n", num3);
    printf("Number4 is: %.2f", num4);

    return 0;
}
