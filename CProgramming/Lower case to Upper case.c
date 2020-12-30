// write a program that takes a lowercase letter from user and convert it to uppercase letter

#include<stdio.h>
int main()

{
    char lower;
    printf("Please enter any lowercase number: ");
    scanf("%c", &lower);

    printf("The uppercase letter is %c", lower-32); /*difference between lowercase and uppercase
    letter is -32*/

    return 0;

}
