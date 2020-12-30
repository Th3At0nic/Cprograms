// 1 + 1/2 + 1/3 + 1/4 ..... + 1/n

#include<stdio.h>
int main()

{
    double i, n, sum = 0;
    printf("Enter N number: ");
    scanf("%lf", &n);

    for(i=1; i<=n; i++)
    {
        sum = (sum + 1/i);
        if(i==1)
            printf("\n1 + ");
        else if(i==n)
            printf("1/%.2lf + ", n);
        else
            printf("1/%.2lf + ", i);
    }

    printf("sum is = %.2lf\n", sum);

    return 0;
}
