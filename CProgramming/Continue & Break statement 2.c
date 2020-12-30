// continue and break statement

#include<stdio.h>
int main()

{
    int i;
    for(i=1; i<200; i++)
    {
        if(i%4==0)
            continue;
        printf("%d\n", i);

        if (i==25)
        break;
}


return 0;
}
