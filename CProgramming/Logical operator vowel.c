// write a program that takes character input and display vowel or consonant

#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter any letter: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Its vowel");
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Its vowel");

    else
        printf("Its consonant.");

    return 0;
}
