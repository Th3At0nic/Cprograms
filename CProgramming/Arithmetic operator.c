/*
write a program that takes two input and display sum, avg and expressions
*/

#include<stdio.h>
int main()

{
    int num1, num2, sum;
    float avg;
    printf("Enter two integers: \n");

    scanf("%d %d", &num1, &num2);
    sum = num1+num2;
    printf("sum is %d\n", sum);
    avg = (float)sum/2; //type casting
    printf("Average is %.2f", avg);

    return 0;
}
