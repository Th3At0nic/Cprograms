/*
write a c program that convert centigrade to fahrenheit.
*/

#include<stdio.h>
void main()

{
    float cent, f;
    printf("Enter centigrade: ");
    scanf("%f/n", &cent);


    f= (1.8*cent+32);

    printf("Result is: %.2f", f);



    return 0;
}
