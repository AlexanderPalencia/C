#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

"""
Implement a program that computes the approximate grade level needed to comprehend some text
https://cs50.harvard.edu/x/2020/psets/2/readability/#:~:text=Implement%20a%20program%20that%20computes%20the%20approximate%20grade%20level%20needed%20to%20comprehend%20some%20text
"""

int count_letters_words(string a);

int main(void)
{
    // Prompt user text
    string text = get_string("Text: ");
    // Calling function for determing grade
    count_letters_words(text);
}

int count_letters_words(string a)
{

    // initialazing variables
    int len = strlen(a);
    int letter = 0;
    int bool_letter = 0;
    float avg_letter = 0;
    float avg_senteces = 0;
    int index = 0;
    int words = 0;
    int senteces = 0;
    // for to every charater in string
    for (int i = 0; i < len; i++)
    {
        // Checking for letter
        if (isupper(a[i]) || islower(a[i]))
        {
            letter++;
            bool_letter = 1;
        }
        // Checking for words
        if (bool_letter && (isblank(a[i + 1]) || a[i + 1] == '\0' || a[i + 1] == '\n'))
        {
            bool_letter = 0;
            words++;
        }
        // Checking for blank sentences
        if (!isblank(a[i]))
        {
            if (a[i] == '.')
            {
                senteces++;
            }
            else if (a[i] == '?')
            {
                senteces++;
            }
            else if (a[i] == '!')
            {
                senteces++;
            }
        }

    }
    printf("%d letter(s)\n%d word(s)\n%d sentence(s)\n", letter, words, senteces);
    // Converting integer to float
    avg_letter = ((float) letter * 100) / (float) words;
    avg_senteces = ((float) senteces * 100) / (float) words;
    // Round and convert to int
    index = (int) round((0.0588 * avg_letter) - (0.296 * avg_senteces) - 15.8);
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
    return index;
}



