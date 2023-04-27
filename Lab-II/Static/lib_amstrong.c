#include<stdio.h>
void amstrong(int n)
{
   int cn,sum=0,rem;
   cn = n;
   while (n != 0)
   {
      rem = n % 10;
      sum = sum + (rem*rem*rem);
      n = n / 10;
   }
   if(cn == sum)
      printf("\n%d is an Armstrong Number",cn);
   else
      printf("\n%d is not an Armstrong Number",cn);
}