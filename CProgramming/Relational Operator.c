/*
relational operator means comaparison of numbers.
like:
<
>
>=
<=
==
!=

and in relational operator we need to use controll statement,
and there r two kind of controll statement:
1- conditional controll statement
2- loop controll statement
today we will do conditinal controll statement below
*/
// even or odd

#include<stdio.h>
int main()

{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num%2==0)
        printf("The number is Even");

    else
        printf("The number is Odd");


    return 0;
}
