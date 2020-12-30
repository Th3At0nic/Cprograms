/*
write a  program that takes uppercase letter from user
then convert to lowercase letter.
*/

#include<stdio.h>
int main()

{
    char lower, upper;
    printf("Please enter an uppercase letter: ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("Lowercase letter is: %c",lower);

    return 0;
}
