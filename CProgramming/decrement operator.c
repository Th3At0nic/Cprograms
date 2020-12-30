#include<stdio.h>
int main()
{
    int x = 10;

    printf("%d\n",x++);// x= 10
    printf("%d\n",x); // x= 11
    printf("%d\n",x--); // x= 11
    printf("%d\n",--x); //x = 9
    printf("%d\n",x); //x = 9
    printf("%d\n",x++); //x= 9
    printf("%d\n",++x); // x= 11

    return 0;
}
