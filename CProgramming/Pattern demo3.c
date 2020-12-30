/*
binary turn
1
10
101
1010
10101
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
        for(col=1; col<=row; col++)
        {
            printf("%d", col%2);
        }
        printf("\n");
    }
    }

    return 0;
}
