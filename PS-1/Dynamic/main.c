#include <stdio.h>
#include <stdlib.h>
#include "dy.h"

int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements for First Array :  ");
 	for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 	printf("Enter the elements for Second Array  :  ");
 	for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("----------------------------------------------------------\n");
    printf("                      Searching\n");
    printf("----------------------------------------------------------\n");
    search(n,a);
    printf("\n");
    printf("----------------------------------------------------------\n");
    printf("                       Merging\n");
    printf("----------------------------------------------------------\n");
    merge(n,a,b);
    printf("\n");
    printf("----------------------------------------------------------\n");
    printf("                       Sorting\n");
    printf("----------------------------------------------------------\n");
    sort(n,a);
    printf("\n");
    return 0;
}