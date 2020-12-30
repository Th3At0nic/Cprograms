/*
write a program that calculates the area of a triangle.
*/

#include<stdio.h>
int main()

{
    float base, height, area;
    printf("Enter base and height: \n");
    scanf("%f\n %f",&base, &height);

    area = 0.5 * base * height;
    printf("area of triangle is: %.1f", area);



    return 0;
}
