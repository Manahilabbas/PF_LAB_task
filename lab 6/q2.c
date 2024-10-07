#include <stdio.h>
int main()
{
	
int num,a;
printf("Enter number:\n");
scanf("%d",&num);
for(a=2;a!=num;a++){
	if(num%a==0)
	{printf("number is not prime");
	a=1;
	break;}
}
if(a!=1)
printf("number is prime");

}