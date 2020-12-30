// write a program that read a number and display it is prime or not

#include<stdio.h>
int main()

{
    while (1)
    {


        int num, i;
        printf("\nEnter any positive number: ");
        scanf("%d", &num);


        for (i=2; i<num; i++)

        {
            if (num%i==0)
            {
                printf("Not Prime Number.\n");
                break;

            }

            else
                printf("Its Prime Number.\n");
                break;

        }


    }

    getch();
}
