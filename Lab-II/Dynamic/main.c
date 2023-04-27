#include<stdio.h>
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
    add(n,a,b);
    sub(n,a,b);
    merge(n,a,b);
    return 0;
}