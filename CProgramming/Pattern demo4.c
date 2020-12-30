/*
1
00
111
0000
11111
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
            printf("%d", row%2);
        }
        printf("\n");
    }
    }

    return 0;
}

