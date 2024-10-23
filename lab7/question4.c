#include <stdio.h>
int main()
{
	
	char string[500];
	int size,a,i,count=1 ;
	printf("enter the size of an array:");
	scanf("%d",&size);
	printf("enter an array:");
	for(a=0;a<size;a++){
		scanf(" %c", &string[a]);
	}
	for(i=0;i<=size/2;i++)
	{ if(string[i]!=string[size-i-1])
     {count=0;
	 printf("given string is not palindrome");
	  break;}
	}
	if(count==1)
	printf("given string is palindrome");
	
	
	
	return 0;

}
