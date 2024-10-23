
/*Write a program that calculates the length of a string using a pointer. Do not use the
built-in strlen() or sizeof() function. After length calculation reverse the string using
the same pointers*/

#include <stdio.h>

int main() {
    char str[100];
    char *start, *end, temp;
    int length = 0,i;

    printf("Enter a string (end with '0'): ");
    for ( i = 0;; i++) {
        scanf(" %c", &str[i]);
        if (str[i] == '0') {    
            str[i] = '\0';     
            break;
        }
    }

    start = str;  
    while (*start != '\0') {
        length++;
        start++;
    }

    printf("Length of the string: %d\n", length);

    start = str;                
    end = str + length - 1;      

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

