/*
write a c program that calculates the area of a rectangle.
*/

#include<stdio.h>
void main() //int main also can be used, both r same.

{
    float weidth, length, area;

    printf("Enter weidth: ");
    scanf("%f", &weidth);
    printf("Enter length: ");
    scanf("%f", &length);

    area = (weidth * length);

    printf("The area of rectangle is: %.1f", area);


    return 0;
}
