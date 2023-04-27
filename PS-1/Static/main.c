#include <stdio.h>
#include <stdlib.h>
#include "st.h"

int main()
{
    FILE *file;
    char path[100];
    printf("Enter source file path : ");
    scanf("%s", path);
    file = fopen(path, "r");
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
    printf("----------------------------------------------------------\n");
    printf("                Copying one file to another\n");
    printf("----------------------------------------------------------\n");
    copy(file,path);
    printf("\n");
    printf("----------------------------------------------------------\n");
    printf("                  Counting no. of words\n");
    printf("----------------------------------------------------------\n");
    count(file,path);
    printf("\n");
    printf("----------------------------------------------------------\n");
    printf("            Counting no. of occurrence of word\n");
    printf("----------------------------------------------------------\n");
    occurrence(file,path);
    printf("\n");
    printf("----------------------------------------------------------\n");
    printf("            Append the given Paragraph\n");
    printf("----------------------------------------------------------\n");
    append(file,path);
    printf("\n");
    fclose(file);
}