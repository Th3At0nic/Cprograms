/*
write a program that will prints floating number , double number and character.
*/
#include<stdio.h>
int main()
{
    float num1= 10.5;
    double num2= 20.5578465;
    char ch= 'a';

    printf("The floating number is %.1f\n", num1);
    printf("The double number is %.4lf\n", num2);
    printf("ch = %c",ch);

    return 0;
}
