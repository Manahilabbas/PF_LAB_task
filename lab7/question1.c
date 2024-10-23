#include <stdio.h>
int main()
{
	int arr[6],a,b,temp;
	for(a=0;a<6;a++){
		printf("\n enter %d digit of an arry: ",a+1);
		scanf("%d",&arr[a]);
	}
	printf("\n");
	for(a=0;a<6;a++)
{
	printf("%d, ",arr[a]);
}
printf("\n");
b=5;
temp=arr[b];
	for(a=0;a<5;a++)
{  temp=arr[b];
   arr[b]=arr[a];
   arr[a]=temp;
}
for(a=0;a<6;a++)
{
	printf("%d, ",arr[a]);
}
	return 0;
}
