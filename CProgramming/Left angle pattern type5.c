/*
AAAA
 BBB
  CC
   D
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

    for(row=n; row>=1; row--)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
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
