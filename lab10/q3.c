/*Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit.*/
#include <stdio.h>

#define MAX_TEMP 30 
void checkTemperature(float temp,int* exceedcount);

int main() {
    float temp;
    int choice;
    int count=0;

    while(1){
        printf("Enter the temperature (in Celsius): ");
        scanf("%f", &temp);

        checkTemperature(temp,& count);

        printf("Do you want to enter another temperature? \n1.yes\n2.no ");
        scanf(" %d", &choice);
        if(choice==2)
        break;

    } 

    return 0;
}

void checkTemperature(float temp,int*exceedcount) {
     

    if (temp > MAX_TEMP) {
        *exceedcount++;
        printf("Temperature %f exceeds the limit of %d°C.\n", temp, MAX_TEMP);
    } else {
        printf("Temperature %f is within the allowable limit.\n", temp);
    }

    printf("Number of exceedances so far: %d\n", exceedcount);
}
