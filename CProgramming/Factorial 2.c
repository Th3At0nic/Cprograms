//factorial means 1 to that number of factorial will be multiply

#include<stdio.h>
int main()

{
    int i, n, fact=1;
    printf("Enter any positive number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("%d\n", fact);


    return 0;
}
