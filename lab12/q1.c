/*Task 1: Write a program that calculates the sum of all the elements in array using pointers
(Note: Generate the array via user)*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int sum=0;
    printf("how many number you want to sum:\n");
    scanf("%d",&n);
    int* pointer=(int*)malloc(sizeof(int)*n);
    if(pointer==NULL){
        printf("memory not allocated");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("enter the number %d:\n",i+1);
        scanf("%d",&pointer[i]);
        sum+=pointer[i];

    }
    printf("your sum is %d",sum);
    free(pointer);
    return 0;
    }