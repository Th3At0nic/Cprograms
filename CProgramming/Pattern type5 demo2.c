/*
1010
 101
  10
   1
bigger to smaller

*/

#include<stdio.h>
int main()

{
    while(1)
    {

    int n, col, row;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=n; row>=1; row--)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ", col);
        }

        //printing number
        for(col=1; col<=row; col++)
        {
            printf("%d", col%2);
        }

        printf("\n");
    }
    }
    return 0;
}
