/* write a program that counts the sum of n numbers
1.5+2.5+3.5+ ..... + n
*/

#include<stdio.h>
int main()

{
    float i, n,sum=0;
    printf("Enter the value of N: ");
    scanf("%f", &n);

    for(i=1.5; i<=n; i++)
    {
        sum= sum+i;
    }

    printf("1.5+2.5+3.5+ ..... +%f = %.2f", n, sum);



    getch();
}
