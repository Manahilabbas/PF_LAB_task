#include <stdio.h>
int max_min(int arr[],int n);
int main()
{ int n,i, arr[20];
 printf("enter the number of an array");
 scanf("%d",&n);
 for (i=0;i<n;i++)
 scanf("%d",&arr[i]);
 max_min(arr, n);
 return 0;
}

int max_min(int arr[],int n){
 int max=-999;
 int min=999,i;
 for(i=0;i<n;i++)
 {
 	if(arr[i]>max)
 	max=arr[i];
 	if(arr[i]<min)
 	min=arr[i];
}
printf ("max=%d \nmin=%d",max,min);
}
