//write a program that read operator and operator and display calculation

#include<stdio.h>
int main()

{
    double num1, num2;
    char op; //op means operator

    printf("Enter operator(+, -, *, /) : ");
    scanf("%c", &op);

    printf("Enter operands: \n");
    scanf("%lf %lf", &num1, &num2);

    switch(op)

    {
    case '+':
    {
        printf("%lf + %lf = %lf\n", num1, num2, num1+num2);
        break;
    }

    case '-':
    {
        printf("%lf - %lf = %lf\n", num1, num2, num1-num2);
        break;
    }

    case '*':
    {
        printf("%lf * %lf = %lf\n", num1, num2, num1*num2);
        break;
    }

    case '/':
    {
        printf("%lf / %lf = %lf\n", num1, num2, num1/num2);
        break;
    }

    default:
        printf("Invalid operator or operands!");

    }


    return 0;

}
