/*
write a program that takes a character from user
and finds ascii value of it
*/

#include<stdio.h>
int main()

{
    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);

    printf("ASCII value of the character is: %d",c);

    return 0;
}
