#include <stdio.h>

int main() {
    int num, a, sum, arms;
    sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    arms = num;
    while (arms != 0) {
        a = arms % 10;  
        sum += a * a * a;
        arms /= 10;     
    }

    if (sum == num) 
        printf("Number is Armstrong\n");
    else
        printf("Number is not Armstrong\n");

    return 0;
}