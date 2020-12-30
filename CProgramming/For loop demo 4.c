//write a program that read a number from user and dispaly it 10 times

#include<stdio.h>
int main()

{
    int i, num;
    printf("Please enter number: ");
    scanf("%d",&num);

    for(i=1; i<=10; i++)
    {
        printf("%d\n",num);
    }


    return 0;
}
