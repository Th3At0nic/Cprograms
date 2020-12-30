//write a program that read numbers and display sum of these

#include<stdio.h>
int main()

{
    while(1)

    {

    int num,sum=0,temp,rem;
    printf("\nEnter any number: ");
    scanf("%d", &num);

    temp = num;

    while(temp!=0)

    {
        rem = temp % 10;
        sum = sum+rem;
        temp= temp/10;
    }

    printf("Sum of digits: %d\n", sum);
    }


    return 0;
}

