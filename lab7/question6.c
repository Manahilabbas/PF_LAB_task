/*Given an array arr[] of size N which contains elements from 0 to N-1, you need to
find one of the elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=1
Element 2=2
Element 3=3
Element 4=2
Element 5=5
Output:
Number 2 occur more than once.*/
#include <stdio.h>
int main()
{
	int arr[100],N,a;
	printf("enter the size of an array");
	scanf("%d",&N);
	printf("enter array");
	for(a=0;a<N;a++)
	{
		scanf(" %d", &arr[a]);
	}
	int b=0,r,found,k,repeated[100];
	
	for(a=b+1,r=0;a<N;a++)
    {
        if (arr[a] == arr[b]) {
            found = 0;
            for ( k = 0; k < r; k++) {
                if (repeated[k] == arr[a]) {
                    found = 1;
		             break;}}} 
	 if(found==0)
	{
		repeated[r]=arr[a];
		r++;
		}
		if(a==N-1)
		{
		b++;
		a=b+1;
		}	
		}
	for(a=0;a<r;a++)
	{
		printf("%d occors more then one time \n",repeated[a]);
		}	
}
