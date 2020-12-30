/*
write a program that takes an uppercase letter from user and convert to lowercase letter.
*/

#include<stdio.h>
int main()

{
    char upper;
    printf("Please enter any uppercase letter: ");
    scanf("%c", &upper);
    printf("The lowercase letter is: %c",upper+32); /*difference between uppercase and lowercase
    letter is +32*/

    return 0;

}
