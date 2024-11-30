/*Write a C Program to Find Largest Number in an array Using Dynamic Memory Allocation. Note:
The array must be dynamically resized and initially the array size will be taken by the user and
then resized by the user
Example arr[5]={1,2,3,4,5}
//After resizing
Arr[7]={1,2,3,4,5,6,7}
Take the same array and resize it.*/
#include <stdio.h>
#include <stdlib.h> // Include this header for malloc

int main() {
    printf("Enter the number of elements for the array:\n");
    int n;
    scanf("%d", &n);

    int *ptr = (int *)calloc(n , sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
     ptr=realloc(ptr,sizeof(int)*(n+5));
     if(ptr==NULL){
        printf("memory not allocated");
        return 1;
    }
    for(int i=n;i<n+5;i++) {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n+5;i++){
         printf("%d ", ptr[i]);
         
    }
    
    free(ptr);
    return 0;
}