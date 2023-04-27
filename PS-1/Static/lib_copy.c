#include <stdio.h>
#include <stdlib.h>

void copy(FILE *sourceFile, char sourcePath[100])
{
    FILE *destFile;
    char destPath[100];
    char ch;
    printf("\nEnter destination file path : ");
    scanf("%s", destPath);
    sourceFile  = fopen(sourcePath, "r");
    destFile    = fopen(destPath,   "w");
    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        fputc(ch, destFile);
        ch = fgetc(sourceFile);
    }
    printf("\nFiles copied successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
}