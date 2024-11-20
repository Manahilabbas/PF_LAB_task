/*Write a recursive function that takes an array and its size as input and prints all the
elements.*/
#include<stdio.h>
void funct( int arr[20],int n);

int main(){
    int arr[20];
    int n, i;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    funct(arr,n-1);

}
void funct( int arr[20],int n )
{ if(n<0)
return;

funct(arr ,n-1);
printf("%d\n",arr[n]);
    
    return;
}