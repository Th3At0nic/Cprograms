// write a program that use continue and break statement

#include<stdio.h>
int main()

{
    int i;
    for (i=1; i<200; i++)
    {
        if(i%3==0)
            continue;
        printf("%d\n",i);

        if (i==20)
            break;
    }



    return 0;
}
