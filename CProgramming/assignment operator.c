#include<stdio.h>
int main()

{
    int x=5;
    int y=2;
    int z=6;
    int a=8;
    int b=10;

    x += 2; // x=x+2

    printf("x: %d\n",x);

    y -= 2; // x=x-2
    printf("y: %d\n",y);

    z *= 3; // z=z*3
    printf("z: %d\n", z);

    a /= 4; // a=a/4
    printf("a: %d\n",a);

    b %= 3; // b=b%3
    printf("b: %d",b);

    return 0;
}
