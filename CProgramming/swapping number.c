/*
write a c program that swaps between two nummbers.
*/

#include<stdio.h>
void main()

{
    int num1 = 10;
    int num2 = 20;
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Number1 is: %d\n",num1);
    printf("Number2 is: %d\n",num2);


    return 0;
}
