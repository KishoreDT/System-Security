#include <stdio.h>
#include <string.h>
 
void palindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("\n%s is not a palindrome\n", str);
            return;
        }
    }
    printf("\n%s is a palindrome\n", str);
}