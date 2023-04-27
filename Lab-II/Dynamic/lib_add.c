#include<stdio.h>
void add(int n,int a[],int b[])
{
    int c[n];
    for (int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nAddition of 2 arrays :");
    for (int i=0;i<n;i++)
    {
        printf(" %d ",c[i]);
    }
}