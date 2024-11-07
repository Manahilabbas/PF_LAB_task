/*Create a Function where it accepts a 2D array of strings where it sorts the string in the array
based on the first character’s ASCII Value in ascending order.
Example: {HELLO,JELLO,MELLO,TELLO,BELLO} //Input to function
Output from Function: {BELLO,HELLO,JELLO,MELLO,TELLO}
Hint: You can use the strcpy function for this to copy the array.*/
#include <stdio.h>
#include <string.h>
void order(char words[][100], int size);
int main(){
	char words[100][100];
	int a,i;
	printf("enter the number of words you want to enter");
	scanf("%d",&a);
	getchar();
	for(i=0;i<a;i++)
	gets(words[i]);
	order(words,a);
	for(i=0;i<a;i++)
	puts(words[i]);
}
void order(char words[][100], int size){
	int i;
	char temp[100];
	for(i=0;i<size-1;i++)
	{
		if(words[i][0]>words[i+1][0])
		{strcpy(temp,words[i]);
		strcpy(words[i],words[i+1]);
		strcpy(words[i+1],temp);}

	}
}