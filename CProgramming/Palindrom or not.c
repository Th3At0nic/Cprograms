// write a program that read a number and display its palindrom or not

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
            rem = temp%10;
            sum = sum*10+rem;
            temp = temp/10;
        }

        if(num==sum)
            printf("Its Palindrom.\n");
        else
            printf("Not Palindrom.\n");
    }



    return 0;
}
