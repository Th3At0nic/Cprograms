//write a program that read input and displays fibonacci number
// 01123581321

#include<stdio.h>
int main()

{
    int n, i, a[30];
    printf("How many numbers: ");
    scanf("%d", &n);

    a[0]=0;
    a[1]=1;

    for(i=2; i<n; i++)
    {
        a[i]= a[i-1] + a[i-2];
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }


    getch();
}
