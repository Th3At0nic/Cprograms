/*
*******
 *****
  ***
   *
*/

#include<stdio.h>
int main()

{
    while(1)
    {

    int col, row, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ", col);
        }

        for(col=1; col<=2*row-1; col++)
        {
            printf("%c", col+64);
        }
        printf("\n");
    }
    }


    getch();
}
