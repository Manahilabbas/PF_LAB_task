#include <stdio.h>
int function(int a,int b , char opp);
int main()
{ int a,b,result;
 char opp;
 printf("enter two number to perform operations:\n");
 scanf("%d %d",&a,&b);
 printf("enter operator:\n");
 scanf(" %c",&opp);
 result=function(a,b,opp);
 printf("result=%d",result);
 return 0;	
}

int function(int a,int b , char opp){
	int result;
	switch (opp){
		case'+':
			result=a+b;
			break;
		case'-':
			result=a-b;
			break;
		case'*':
			result=a*b;
			break;
		case'/':
			result=a/b;
			break;
			default:
			printf("invalid operator");
	}
	return result;
}
