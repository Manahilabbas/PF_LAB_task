Enable desktop notifications for NUCES-FAST Mail.
   OK  No thanks

5 of 595
(no subject)
Inbox

k240654 Armeen Azam <k240654@nu.edu.pk>
Attachments
12:18 PM (6 hours ago)
to me


 3 Attachments
  •  Scanned by Gmail
#include<stdio.h>
int main()
{
	int i , j, rows;
	printf("Enter number of rows:");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf(" ");
			
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	
		for(i=rows-1;i>0;i--)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf(" ");
			
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
}