// write a program that reads user input and display sum and average

#include<stdio.h>
int main()

{
    int num[5], sum=0, i;
    float average;
    printf("Enter 5 Numbers: \n");

    for(i=0; i<=4; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0; i<=4; i++)
    {
        sum = sum + num[i];
    }

        printf("Sum of numbers is: %d\n", sum);
    printf("Average of numbers is: %.2f\n", (float) sum/5);

    return 0;




}
