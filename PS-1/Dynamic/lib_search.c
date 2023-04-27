#include <stdio.h>

int search(int n, int arr[])
{
	int i,x,E,I;
	printf("\n");
    printf("Enter the element to be searched : ");
    scanf("%d",&x);
	for (i = 0; i < n; i++)
    {
		if (arr[i] == x)
        {
			E=x;
            I=i;
        }  
    }
    if (E==x)
    {
        printf("\nElement found at index %d",I);
    }
    else
    {
        printf("\nElement not found");
    }
	printf("\n");
}