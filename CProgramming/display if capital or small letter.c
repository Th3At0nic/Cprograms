// write a program that takes a letter input and display that it is capital or small

#include<stdio.h>
int main()

{
    char ch;
    printf("Enter letter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Letter is capital");

    else if (ch >= 'a' && ch <= 'z')
        printf("Letter is small");

    else
        printf("Its not a letter. Print a letter please.");


    return 0;
}
