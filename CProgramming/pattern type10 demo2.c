/*
   A
  ABC
 ABCDE
ABCDEFG
*/

#include<stdio.h>
int main()
{
    int col, row, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=2*row-1; col++)
        {
            printf("%c", col+64);
        }
        printf("\n");
    }

    getch();
}
