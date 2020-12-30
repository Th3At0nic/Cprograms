/*
*******
*******
*******
*******
*******
*******

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
        for(col=1; col<=n; col++)
        {
            printf("* ", col);
        }
        printf("\n");
    }
    }




    return 0;
}
