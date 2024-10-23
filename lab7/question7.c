#include <stdio.h>

int main() {
    char arr[100];
    int i, result;

    printf("Enter a string: ");
    scanf("%s", arr);

   
    for (i = 0; arr[i] != '\0'; i++) {
       
        if ((arr[i] == '+' && arr[i + 1] == '-') ||
            (arr[i] == '-' && arr[i + 1] == '+') ||
            (arr[i] == '-' && arr[i + 1] == '-') ||
            (arr[i] == '+' && arr[i + 1] == '+')) {
            printf("Invalid expression\n");
            return 0; 
        }
    }

   
    if (arr[0] == '+' || arr[0] == '-' || arr[i-1] == '+' || arr[i-1] == '-') {
        printf("Invalid expression\n");
        return 0;
    }

    
    result = arr[0] - '0';  

    for (i = 0; arr[i+2] != '\0'; i += 2) { 
        if (arr[i+1] == '+') {
            result += (arr[i+2] - '0');
        } else if (arr[i+1] == '-') {
            result -= (arr[i+2] - '0');
        }
    }

  
    printf("Result is %d\n", result);
    return 0;
}


