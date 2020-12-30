
/*
write a program that takes any letter from user and convert it to opposite
lettercase using librery fucntion.
*/

#include<stdio.h>
int main()

{
    char lower, upper;
    printf("Please enter a lower letter: ");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("uppercase letter is: %c\n",upper);

    return 0;

}
