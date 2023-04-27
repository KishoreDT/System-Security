#include <stdio.h>
#include <stdlib.h>

void count(FILE *file, char path[100])
{
    char ch;
    int characters, words, lines;
    file = fopen(path, "r");
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }
    fclose(file);
    printf("\nTotal words = %d\n", words);
}