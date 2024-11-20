/*Define a Book structure with fields like title, author, publication_year, and price. Create
an array of books and write functions to:
1. Display all books in the library
2. Search for a book by title
3. List book by a specific author*/
#include <stdio.h>
#include <string.h>
struct book {
    char title[10];
    char author[10];
    int publication_year;
    int price;
};
void display_books(struct book name[], int size);
void searching(char* book_name, struct book name[], int size);
void by_author(char* author, struct book name[], int size);

int main() {
    struct book name[10];
    printf("Enter details for %d books:\n", 10);
    for (int i = 0; i < 10; i++) {
        printf("Book %d:\n", i + 1);
        printf("Enter title: ");
        scanf(" %[^\n]", name[i].title);
        printf("Enter author: ");
        scanf(" %[^\n]", name[i].author);
        printf("Enter publication year: ");
        scanf("%d", &name[i].publication_year);
        printf("Enter price: ");
        scanf("%d", &name[i].price);
    }
    printf("\nAll Books:\n");
    display_books(name, 10);

    char search[10];
    printf("\nEnter the title of the book you want to search: ");
    scanf(" %[^\n]", search);
    searching(search, name, 10);
    char author[10];
    printf("\nEnter the author's name to search books: ");
    scanf(" %[^\n]", author);
    by_author(author, name, 10);

    return 0;
}
void display_books(struct book name[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Title: %s\n", name[i].title);
        printf("Author: %s\n", name[i].author);
        printf("Publication Year: %d\n", name[i].publication_year);
        printf("Price: %d\n", name[i].price);
    }
}

void searching(char* book_name, struct book name[], int size) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(book_name, name[i].title) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", name[i].title);
            printf("Author: %s\n", name[i].author);
            printf("Publication Year: %d\n", name[i].publication_year);
            printf("Price: %d\n", name[i].price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with title '%s' not found.\n", book_name);
    }
}
void by_author(char* author, struct book name[], int size) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(author, name[i].author) == 0) {
            printf("Book by '%s':\n", author);
            printf("Title: %s\n", name[i].title);
            printf("Publication Year: %d\n", name[i].publication_year);
            printf("Price: %d\n", name[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("No books by author '%s' found.\n", author);
    }
}
