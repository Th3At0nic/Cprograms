// write a program that read number from user and display its multiplication table using while loop

#include<stdio.h>
int main()

{
    while (1) /*this while loop is for non stop output. u can run ur output as much as u can
        without close the output window.. if u dont use this loop here, no issue . u can run
        ur program normally*/
    {

    int i=1;
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (i<=10)
    {
        printf("%d X %d = %d\n", num, i, num*i);
        i++;
    }
    }

    return 0;
}
