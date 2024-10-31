/*Write a C program to find the saddle point(s) in each 3x3 matrix. A saddle point is an element
that is the smallest in its row and the largest in its column.*/
#include <stdio.h>

int main() {
    int arr[3][3], i, j, k;
    int found;
    printf("Enter elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Saddle points in the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            found = 1;
            for(k = 0; k < 3; k++) {
                if(arr[i][j] > arr[i][k]) {
                    found = 0; 
                    break;
                }
            }

          
            if(found) {
                for(k = 0; k < 3; k++) {
                    if(arr[i][j] < arr[k][j]) {
                        found = 0;  
                        break;
                    }
                }
            }
            if(found) {
                printf("Saddle element: %d at position (%d, %d)\n", arr[i][j], i + 1, j + 1);
            }
        }
    }

    return 0;
}

