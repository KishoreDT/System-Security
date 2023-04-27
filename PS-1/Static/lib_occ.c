#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

int countOccurrences(FILE *file, const char *word);


void occurrence(FILE *file, char path[100])
{
    char word[50];
    int wCount;
    printf("\nEnter word to search in file : ");
    scanf("%s", word);
    file = fopen(path, "r");
    wCount = countOccurrences(file, word);
    printf("\n'%s' is found %d times in file.", word, wCount);
    fclose(file);

}

int countOccurrences(FILE *file, const char *word)
{
    char str[BUFFER_SIZE];
    char *pos;
    int index, count;
    count = 0;
    while ((fgets(str, BUFFER_SIZE, file)) != NULL)
    {
        index = 0;
        while ((pos = strstr(str + index, word)) != NULL)
        {
            index = (pos - str) + 1;
            count++;
        }
    }
    return count;
}