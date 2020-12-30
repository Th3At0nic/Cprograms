//write a c program that calculate fahrenheit to centigrade.

#include<stdio.h>
void main()

{

        float F, C; //F= fahrenheit, C= centigrade
    printf("Enter fahrenheit: ");
    scanf("%f/n",&F);

    C= ((F-32)/1.8);

    printf("Centigrade: %.2f", C);



    return 0;
}
