//write a program that displays two dimentional array

#include<stdio.h>
int main()

{
    while(1)
    {

    int i, j;
    int A[3][4] = { {3,4,5,6}, {11,12,13,14}, {22,23,24,25} };


    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");

    }

    getch();

    }
}
