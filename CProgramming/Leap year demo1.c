// write a program that takes input a year from user and and  display if that leap year or not

#include<stdio.h>
int main()

{
    int year;
    printf("Please enter the year: ");
    scanf("%d", &year);

    if (year%400==0)
        printf("Its leap year");
    else if (year%4==0 && year%100!=0)
        printf("Its a leap year");

    else
        printf("Its not leap year");

    return 0;
}
