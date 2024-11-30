/*Write a program that ask the user to enter the total &#39;N&#39; no of characters in user&#39;s name {First
Name + Last Name} to create a dynamic array of characters. After create a dynamic array of
that &#39;N&#39; no of characters using malloc or calloc function. Finally copy your full name in it that has
already been taken from the user before
Dynamic Array = &quot;Muhib Ahmed&quot;;*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the total number of characters in your full name (including spaces):\n");
    scanf("%d", &n);
    getchar();

    char *name = (char *)malloc((n + 1) * sizeof(char));
    if (name == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter your full name:\n");
    gets(name);

    printf("Your full name is: %s\n", name);

    free(name);

    return 0;
}
