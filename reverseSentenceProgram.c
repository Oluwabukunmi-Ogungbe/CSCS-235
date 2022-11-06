// This is a program to reverse a sentence

#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Enter Sentence: ");
    reverseSentence();

    return 0;
}
void reverseSentence()
{
    char letter;
    scanf("%c", &letter);

    if (letter != '\n')
    {
        reverseSentence();
        printf("%c", letter);
    }
}