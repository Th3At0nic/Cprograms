// write a program that read temperature and converet it to as user wants

#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedTemp;

    printf("Temperature conversion manu:\n");
    printf("1. Celcius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    switch(choice)
    {

    case 1:
    {
        printf("Enter your Celsius temperature: \n");
        scanf("%f", &temp);
        convertedTemp = 1.8*temp + 32;
        printf("The Fahrenheit temperature is: %.2f\n", convertedTemp);
        break;

    }

    case 2:
        {
        printf("Enter your Fahrenheit temperature: \n");
        scanf("%f", &temp);
        convertedTemp = (temp - 32) / 1.8 ;
        printf("The Celsius temperature is: %.2f\n", convertedTemp);
        break;
        }

    default:
        printf("Invalid option");

    }
}
