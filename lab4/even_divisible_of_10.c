#include <stdio.h>
int main()
{
int number;
printf ("enter a number");
scanf("%d",&number);
if (number>0 && number%2==0 && number%10==0)
  printf(" number is positive, multiple of 2 and divisible bt 10");
 else
 printf("numebr is discarded");
}
