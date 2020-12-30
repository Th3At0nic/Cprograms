/*
write a program that calculates the area of a circle.
area =  M_PI radius * redius (should use #include<math.h> file)
or area = 3.1416 * radius * radius.
*/

#include<stdio.h>
int main()

{
    float radius, area;
    printf("Enter radius: ");
    scanf("%f",&radius);

    area = 3.1416 * radius * radius; // PI = 3.1416

    printf("Area is: %.2f", area);

    return 0;
}

