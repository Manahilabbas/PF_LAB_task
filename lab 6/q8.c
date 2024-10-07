#include <stdio.h>
int main()
{
	
	char B;
	for(B=65; B<=70 ;B++)
	{
	if(B==65||B==70)
	printf("%c %c %c %c %c\n",B,B+1,B+2,B+3,B+4);
	else if(B==66||B==68)
	printf("  %c   %c\n",B+1,B+4);
	else if(B==67)
	printf("    %c    \n",B+2);
	
	}
for(B=1; B<=5 ;B++)
	{
	if(B==1||B==5)
	printf("* * * * *\n");
	else if(B==2||B==4)
	printf("  *   *    \n");
	else if(B==3)
	printf("    *    \n");
	
	}
}