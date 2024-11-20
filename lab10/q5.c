/*Write a recursive function bubbleSort that takes an array and its size. It performs the
bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
they are in the wrong order.*/
#include<stdio.h>

void funct(int arr[], int n);

int main() {
    int arr[20];
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    funct(arr, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void funct(int arr[], int n) {
    int temp;

    if (n < 1) 
        return;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i + 1]) {
        
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    funct(arr, n - 1);
}
