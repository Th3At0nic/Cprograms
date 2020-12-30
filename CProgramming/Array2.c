//write a program that read some numbers and displays maximum

#include<stdio.h>
int main()

{
    int num[100], max=num[0], i, n;
    printf("How many numbers? : ");
    scanf("%d\n", &n);


    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
        if(max < num[i])
            max = num[i];

    }

    printf("Maximum Number is: %d", max);



    getch();
}
