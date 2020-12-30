/*
     1
    123
   12345
  1234567
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
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            printf("%d", col);
        }

        printf("\n");
    }
    }

    getch();
}
