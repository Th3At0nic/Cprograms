/*
********
*      *
*      *
*      *
*      *
********

*/

#include<stdio.h>
int main()

{
    while(1)
    {

    int col, row, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || col==1 || row==n || col==n)
            {
                printf("*");
            }

            else
                printf(" ");

        }
        printf("\n");
    }
    }

    getch();
}
