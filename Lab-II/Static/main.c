#include<stdio.h>
#include "st.h"
int main()
{
    int n;
    char str[100];
    printf("Enter a number :");
    scanf("%d",&n);
    printf("\n");
    reverse(n);
    amstrong(n);
    sprintf(str,"%d",n);
    palindrome(str);
    return 0;
}