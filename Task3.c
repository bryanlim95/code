/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
// Written by Lim Zi Chung 
void reverse(char [], int, int);
void main()
{
    char word[20]= {};
    char preword[20]= {}; 
    printf("Enter a word: " );
    scanf("%s", word);
    int size;
    size = strlen(word);  
    strcpy(preword, word);    
    reverse(word, 0, size - 1);
    printf("The string after reversing is: %s\n", word);
    if (strcmp(word, preword) == 0)
    {
        printf("The input word is a palindrome");
    }
    else
    {
        printf("The input word is NOT a palindrome");
    }
}
    
void reverse(char word[], int index, int size)
{
    char temp;
    temp = word[index];
    word[index] = word[size - index];
    word[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(word, index + 1, size);
}
