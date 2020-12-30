// pattern
// row , collumn
// write a program that read pattern number and display row and collumn

#include<stdio.h>
int main()

{
    while(1)
    {

    int row, col, n;
    printf("\nEnter N: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    }
    return 0;
}
