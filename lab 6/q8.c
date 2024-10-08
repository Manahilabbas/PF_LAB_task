#include <stdio.h>
int main()
{
	//leters hologlass
	printf("leters hologlass\n");
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
 //holo glass with*
 printf("\nHolo glass with*\n");
for(B=1; B<=5 ;B++)
	{
	if(B==1||B==5)
	printf("* * * * *\n");
	else if(B==2||B==4)
	printf("  *   *    \n");
	else if(B==3)
	printf("    *    \n");
	
	}
// three continous holo glass 
    printf("\nThree continous hologlass\n");
	int a;
	for(B=65,a=1; B<=70||a<=13 ;B++,a++)
	{
	if(B==65||B==70)
	printf("%c %c %c %c %c\n",B,B+1,B+2,B+3,B+4);
	else if(B==66||B==68)
	printf("  %c   %c\n",B+1,B+4);
	else if(B==67)
	printf("    %c    \n",B+2);
	if(B==71)
	B=65;
	}


}
