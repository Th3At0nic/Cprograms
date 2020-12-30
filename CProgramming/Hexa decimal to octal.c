/*
write a program that takes input from user and converts hexa-decimal to octal.
*/

#include<stdio.h>
int main()

{
    int num;
    printf("Enter a hexa-decimal number: ");
    scanf("%x",&num);
    printf ("Octal number is %o",num);

    getch();
}
