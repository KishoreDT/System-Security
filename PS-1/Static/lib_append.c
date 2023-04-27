#include <stdio.h>

void append(FILE *file, char path[100])
{
    int i,n;
    char str[100];
    char str1;	
    file = fopen(path, "a"); 
    printf("Input the number of lines to be written : ");
    scanf("%d", &n);
    printf("\nPlease type paragraph : \n");  
    for(i = 0; i < n+1;i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, file);
    }
    fclose (file);
	file = fopen (path, "r");  
	printf("\nThe content of the file %s is  :\n",path);
	str1 = fgetc(file);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(file);
		}
    printf("\n\n");
    fclose (file);
}