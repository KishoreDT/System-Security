#include<stdio.h>
void sub(int n,int a[],int b[])
{
    int c[n];
    for (int i=0;i<n;i++)
    {
        c[i]=a[i]-b[i];
    }
    printf("\nSubtraction of 2 arrays :");
    for (int i=0;i<n;i++)
    {
        printf(" %d ",c[i]);
    }
}