// goto statement

#include<stdio.h>
int main()

{
    int i=1;

Rahat:
    printf("%d\t", i);
    i++;

    if(i<=5)
        goto Rahat; //lebel is calling here

    return 0;
}
