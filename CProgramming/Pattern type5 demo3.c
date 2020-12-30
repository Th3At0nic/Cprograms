/*
4444
 333
  22
   1
left angle pattern
*/

#include<stdio.h>
int main()

{
    int col, row,n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d", row);
        }

        printf("\n");
    }

    return 0;
}
