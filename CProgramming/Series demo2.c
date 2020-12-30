/* write a program that counts the sum of n numbers
1+2+3+4+ ....... + n
*/

#include<stdio.h>
int main()

{
    int a=1, sum=0, n;
    printf("Print the last number of series: ");
    scanf("%d", &n);

    while(a<=n)
    {
        sum= sum+a;
        a++;
    }

    printf("1+2+3+4+ ..... +%d = %d", n, sum);


    getch();
}
