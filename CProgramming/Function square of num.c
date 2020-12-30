//write a program that uses function
//function square of num

#include<stdio.h>

int square(int a)
{
    return a*a;
}


int main()

{
    int num;
    printf("Enter any integer: ");
    scanf("%d", &num);

    int result = square(num);
    printf("The square of num is %d\n", result);


    return 0;
}
