#include<stdio.h>
void merge(int n,int a[],int b[])
{
 	int n3, i, j;
	n3 = n*2;
    int c[n3];
  	for(i = 0; i < n; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = n; j < n3 && i < n; i++, j++)
  	{
  		c[j] = b[i];
  	}
 	printf("\nArray Elements After Merging :"); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d ",c[i]);
  	}
	printf("\n");
}