//write a program that displays the sum of float n numbers\
// 1.5 + 2.5 + 3.5 + ......... + n

#include<stdio.h>
int main()

{
    float i, sum=0, n;
    printf("Enter N number: ");
    scanf("%f", &n);

    for(i=1.5; i<=n; i++)
    {
        sum = sum+i;
    }

    printf("Sum of numbers: %f\n", sum);


    return 0;
}
