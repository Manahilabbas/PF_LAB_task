#include <stdio.h>
int main()
{
	
	char B;
	for(B=65; B<=71 ;B++)
	{
	if(B==65||B==71)
	printf("%c %c %c %c %c\n",B,B+1,B+2,B+3,B+4);
	else
	printf("%c       %c\n",B,B+4);
	
	}
}