/*
time based message to user

*/

#include<stdio.h>
int main()

{
    float time;
    printf("Whats your time sir? : ");
    scanf("%f",&time);

    if (time<12)
        printf("Good Morning sir, Have a nice day");
    else if (time > 12 && time < 17)
        printf("Good Afternoon sir");

    else
        printf("Good Evening sir");


    return 0;
}
