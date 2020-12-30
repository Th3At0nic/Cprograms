//write a program that takes input of two matrix from user and displays its multiplication

#include<stdio.h>
int main()

{
    int first[10][10], second[10][10], result[10][10], row1, col1, row2, col2, i, j, k, sum=0;

    printf("Enter the elements of first matrix: \n");
    scanf("%d %d", &row1, &col1);

    printf("\nEnter the elements of second matrix: \n");
    scanf("%d %d", &row2, &col2);

    while(col1!=row2)
    {
        printf("Enter the elements of first matrix: \n");
        scanf("%d %d", &row1, &col1);

        printf("\nEnter the elements of second matrix: \n");
        scanf("%d %d", &row2, &col2);
    }

    //scanning first matrix
    printf("\nFirst matrix: \n");

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("\nA[%d][%d] = ", i, j);
            scanf("%d", &first[i][j]);
        }
        printf("\n");
    }


    //scanning second matrix
    printf("Second Matrix: \n");


    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("\nB[%d][%d] = ",i,j);
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }


    //printing first matrix
    printf("First matrix: \n");

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("\t\t");
            printf("%d", first[i][j]);
        }
        printf("\n");
    }

    //printing second matrix
    printf("Second matrix: \n");

    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("\t\t");
            printf("%d", second[i][j]);
        }
        printf("\n");
    }

    //multiplying matrix
    printf("Multiplication of two matrix: ");

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            for(k=0; k<col1; k++)
            {
                sum = sum + first[i][k] * second [k][j];
                result[i][j] = sum;
            }
            sum = 0;
        }
    }

    //printing result matrix
    printf("\nResult matrix: \n");

    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("\t\t");
            printf("%d", result[i][j]);
        }
        printf("\n");
    }








    getch();
}
