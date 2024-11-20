/*Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.*/
#include<stdio.h>
#include<string.h>

struct travel {
    char package_name[50];
    char destination[50];
    char duration[20];
    int cost;
    int number_of_seats_available;
};

void available_packages(struct travel packages[], int size);
void booking(struct travel information[], int size);

int main() {
    struct travel packages[10]; // Assume 10 packages
    printf("Enter the package details:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Enter the following details for package %d:\n", i + 1);

        printf("Enter the name:\n");
        scanf(" %[^\n]", packages[i].package_name); // Read string with spaces

        printf("Enter the destination:\n");
        scanf(" %[^\n]", packages[i].destination);

        printf("Enter duration:\n");
        scanf(" %[^\n]", packages[i].duration);

        printf("Enter cost:\n");
        scanf("%d", &packages[i].cost);

        printf("Enter number of seats available:\n");
        scanf("%d", &packages[i].number_of_seats_available);
    }

    available_packages(packages, 10);
    booking(packages, 10);

    return 0;
}

void available_packages(struct travel packages[], int size) {
    printf("Available packages are:\n");

    for (int i = 0; i < size; i++) {
        if (packages[i].number_of_seats_available > 0) {
            printf("Package %d:\n", i + 1);
            printf("Name: %s\n", packages[i].package_name);
            printf("Destination: %s\n", packages[i].destination);
            printf("Duration: %s\n", packages[i].duration);
            printf("Cost: %d\n", packages[i].cost);
            printf("Seats available: %d\n", packages[i].number_of_seats_available);
          
        }
    }
}

void booking(struct travel information[], int size) {
    int package_index, seats_to_book;

    printf("Which travel package do you want to book? Enter the number:\n");
    scanf("%d", &package_index);
    package_index--;

    if (package_index < 0 || package_index >= size) {
        printf("Invalid package number!\n");
        return;
    }

    printf("How many seats do you want to book?\n");
    scanf("%d", &seats_to_book);

    if (information[package_index].number_of_seats_available >= seats_to_book) {
        printf("Your seats have been booked!\n");
        information[package_index].number_of_seats_available -= seats_to_book;
    } else if (information[package_index].number_of_seats_available > 0) {
        printf("We have only %d seats available.\n", information[package_index].number_of_seats_available);
    } else {
        printf("No seats are available now.\n");
    }
}
