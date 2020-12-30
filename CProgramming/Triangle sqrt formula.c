/*
write a c program that finds the area of a triangle a,b,c values are given by user
*/

#include<stdio.h>
int main()

{
    double a, b, c, s, area;
    printf("Enter the value of a, b, c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    s= (a+b+c)/2; //here that 's' means half of a triangle area.

    printf("s= %.0lf\n",s);

    area= sqrt (s * (s-a) * (s-b) * (s-c)); //this is the formula of finding triangle area


    printf("Area is: %lf",area);
    return 0;

}
