/* factorial use to shown by "!" .. 5 er factorial mane 1 theke 5 er multiplication.
like: 1*2*3*4*5.. 5 er factorial : 5!
*/

#include<stdio.h>
int main()

{
    int i, fact=1, n;
    printf("Enter any positive number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact= fact * i;
    }
    printf("%d\n", fact);


    return 0;
}
