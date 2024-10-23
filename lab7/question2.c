#include <stdio.h>
int main()
{   int num,a ,counta=0, counte=0, counti=0, counto=0, countu=0;
	char word[50];
	printf("enter the lenght of word");
	scanf("%d",&num);
	for(a=0; a<num ;a++)
	{scanf(" %c",&word[a]);
	}
	
	for(a=0; a<num ;a++)
	{switch (word[a])
{
		case 'a':
		counta++;
		break;
		case 'e':
		counte++;
		break;
		case 'i':
		counti++;
		break;
		case 'o':
		counto++;
		break;
		case 'u':
		countu++;
		break;
	}}
	printf("a=%d \n e=%d\n i=%d \n o=%d \n u=%d",counta,counte,counti,counto,countu);
	return 0;
}
