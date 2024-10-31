/*Write a C program to multiply two matrices of size 3x3 and display the result matrix. Also
subtract the resultant matrix from Matrix A as well.*/

#include <stdio.h>
int main()
{int m1[3][3],m2[3][3],i,j,k,result[3][3];
printf("Enter elements of the first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

printf("Enter elements of the second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }}
        
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
     for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
		result[i][j]+=m1[i][j];
		}
		}
	
	printf("Resultant matrix after adition in matric 1:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;}
