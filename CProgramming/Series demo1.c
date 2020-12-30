// count the sum of 1+2+3+4+.............+N

#include<stdio.h>
int main()

{
    int i, sum=0, n;
    printf("Print the value of N: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum= sum+i;
    }
    printf("1+2+3+4+.............+%d = %d", n, sum);

    getch();
}
