/*Define a structure Date with fields day, month, and year. Create another structure Event with fields event_name, date 
(nested Date structure),and location. Write a program to display all event details in a readable format.*/
#include<stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct event {
    char event_name[20];
    struct date event_date;
    char location[50];
};

int main() {
    int n;
    struct event events[50];

    printf("Enter the number of events: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter the details for event %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", events[i].event_name);
        printf("Date (dd mm yyyy): ");
        scanf("%d %d %d", &events[i].event_date.day, &events[i].event_date.month, &events[i].event_date.year);
        printf("Location: ");
        scanf(" %[^\n]", events[i].location);
    }
    printf("\nEvent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for event %d:\n", i + 1);
        printf("Event Name: %s\n", events[i].event_name);
        printf("Event Date: %02d/%02d/%04d\n", 
               events[i].event_date.day, events[i].event_date.month, events[i].event_date.year);
        printf("Location: %s\n", events[i].location);
    }

    return 0;
}
