#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort(int n, int arr[])
{
    int i, j;
    for (i = 0; i < n-1; i++)	
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
    printf("\n");
    for (i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}