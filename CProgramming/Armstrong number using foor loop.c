/*write a program that read numbers and displays armstrong numbers between
initial and final number.
*/

#include<stdio.h>
int main()

{

    int i, rem, temp, initialNum, finalNum, sum=0;

    printf("\nEnter Initial Number: ");
    scanf("%d", &initialNum);

    printf("\nEnter Final Number: ");
    scanf("%d", &finalNum);


    for(i=initialNum; i<=finalNum; i++)
    {
        temp=i;

        while(temp!=0)
        {
            rem= temp%10;
            sum= sum + rem*rem*rem;
            temp= temp/10;
        }


        if(sum==i)
        {
            printf("%d",i);
        }

    }
    sum=0;

    return 0;
}
