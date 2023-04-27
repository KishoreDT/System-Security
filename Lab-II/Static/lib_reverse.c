#include <stdio.h>
void reverse(int n)
{
    int r=0, remainder;
    while (n != 0) {
        remainder = n % 10;
        r = r * 10 + remainder;
        n /= 10;
    }
    printf("Reversed Number : %d", r);
}
