/*write a prograam to read 10 integers into an array then use loop to find the  frequency of each element in the array*/
#include <stdio.h>

int main() {
    int arr[10], freq[10] = {0}; 
    int i, j;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] == 0) { 
            int count = 1; 
            
            for (j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = -1;
                }
            }
            freq[i] = count;
        }
    }

    printf("\nFrequency of elements:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

