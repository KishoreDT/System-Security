#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter a sentence: ");
    scanf("%s",&str);
    
    printf("the reversed %s",strrev(str));
    return 0;
}