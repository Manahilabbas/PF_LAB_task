#include <stdio.h>
int main()
{
int ammount,time; 
float rate, interest;
printf (" enter an principal ammount \n (note: ammount must be in the range of 100 to 1,000,000)");
scanf("%d",&ammount);
printf("enter a rate of interest \n (note: rate must ne in the range of 5% _ 10%)");
scanf("%f",&rate);
printf(" enter the time period (note: the time period must be in the range og 1 to 10 years)");
scanf ("%d",&time);
rate =rate/100;
interest=rate*ammount*time;
printf(" the intrest will be %f", interest);
}
