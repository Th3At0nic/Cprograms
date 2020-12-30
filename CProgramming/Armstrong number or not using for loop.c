
// write a program that read number and display its armstrong or not

#include<stdio.h>
int main()

{
    while(1)
    {

        int i, temp, rem, sum=0;

        for(i=1; i<=1000; i++)
        {

            temp=i;

            while(temp!=0)
            {
                rem= temp%10;
                sum = sum+rem*rem*rem;
                temp = temp/10;

            }
            if (i==sum)
            {
                printf("%d",i);
            }

        }
        sum=0;
    }

    return 0;
}
