#include <stdio.h>
int main()
{
	
	char a=1;
	do
	{
	if(a==1||a==6)
	printf("*       *\n");
	else
	printf("* * * * *\n");
	a++;
	}while(a!=7);
}