// write a program that read a number from user and display its multiplication table

#include<stdio.h>
int main()

{
    while (1) /*this while loop is for non stop output. u can run ur output as much as u can
        without close the output window.. if u dont use this loop here, no issue . u can run
        ur program normally*/
    {

    int i, num;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (i=1; i<=10; i++)
    {

        printf("%d X %d = %d\n", num, i, num*i);
    }
    }

    return 0;
}
