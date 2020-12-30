//Linear search

#include<stdio.h>
int main()

{
    int value, i, num[] = {10,20,50,66,25,80};
    printf("Print the value you want to search: ");
    scanf("%d",&value);

    int position = -1;

    for(i=0; i<6; i++)
    {
        if(value == num[i])
        {
            position= i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("Not Found! :( ");
    }

    else
        printf("The value found at position %d", position);


        getch();


}

