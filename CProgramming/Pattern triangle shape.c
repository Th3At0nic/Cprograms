/*
*
* *
*   *
*     *
*       *
***********

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
            if(row==n || col==1 || row==col)
                printf("*");

            else
                printf(" ");

        }
        printf("\n");
    }
}

    getch();
}
