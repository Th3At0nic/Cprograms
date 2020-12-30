/*
   A
  BB
 CCC
DDDD
Left pattern
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
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ", col);
        }

        //printing number
        for(col=1; col<=row; col++)
        {
            printf("%c", col+64);
        }
        printf("\n");

    }
    }



    return 0;
}
