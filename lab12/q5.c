/*Using Task. 4, resize that dynamic array of character and append the array with your studentId.
That student id must be taken input from the user.

DynamicArray = &quot;Muhib Ahmed&quot;; // Before

DynamicArray = &quot;K241234 Muhib Ahmed&quot;; // After the text append*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    scanf("%s", name);

    char *temp = (char *)malloc((n + 1) * sizeof(char));
    if (temp == NULL) {
        printf("Memory allocation failed for temp\n");
        free(name);
        return 1;
    }
    strcpy(temp, name);
    
    name = realloc(name, n + 1 + 8 + 1);
    if (name == NULL) {
        printf("Memory reallocation failed\n");
        free(temp);
        return 1;
    }

    printf("Enter your student ID:\n");
    char id[9];
    scanf("%8s", id);

    strcpy(name, id);
    name[7] = ' ';

    for (int i = 0; i < n; i++) {
        name[i + 8] = temp[i];
    }
    name[n + 8] = '\0';

    printf("Updated string: %s\n", name);

    free(name);
    free(temp);

    return 0;
}

