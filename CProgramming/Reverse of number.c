// write a program that read a number and display its reverse

#include<stdio.h>
int main()

{
    while(1)
    {

        int num, temp, rem, sum=0;
        printf("\nEnter any number: ");
        scanf("%d", &num);

        temp = num;

        while(temp!=0)

        {
            rem= temp%10;
            sum= (sum*10)+rem;
            temp= temp/10;
        }

        printf("Reverse number is: %d\n", sum);

    }

    return 0;
}
