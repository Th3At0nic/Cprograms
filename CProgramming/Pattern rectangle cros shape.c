/*

***************
**            *
* *           *
*  *          *
*   *         *
*    *        *
*     *       *
*      *      *
*       *     *
*        *    *
*         *   *
*          *  *
*           * *
*            **
***************

*/

#include<stdio.h>
int main()
{
    int col, row, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || col==n || row==n || col==1 || row==col)
                printf("*");

            else
                printf(" ");

        }
        printf("\n");
    }

    getch();
}

