/*
write a program that converts octal number to decimal number.
*/

#include<stdio.h>
int main()

{
    int num;
    printf("Enter an octal number: ");
    scanf("%o", &num);
    printf("Decimal number is: %d",num);

    return 0;
}
