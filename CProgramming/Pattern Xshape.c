/*

*           *
  *       *
    *   *
      *
    *   *
  *       *
*           *

*/

#include<stdio.h>
int main()
{
    while(1)
    {

        int col, row, n;
        printf("\nEnter N: ");
        scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
            {
                if(row==col || col+row == n+1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");

        }
    }


    getch();
}
