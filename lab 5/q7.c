#include <stdio.h> 
int main()
{
int number;
printf ("Enter number ");
scanf("%d",&number);
(number%10==0)? printf ("last digit is zero"):printf("last digit is non zero");
return 0;
}