/*
  1
 12
123
 12
  1
*/

#include<stdio.h>
int main()
{
    int col, row, n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d", col);
        }

        printf("\n");
    }

    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d", col);
        }

        printf("\n");
    }


    return 0;

}
