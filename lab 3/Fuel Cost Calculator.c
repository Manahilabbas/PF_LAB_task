#include<stdio.h>
int main()
{
float avg,fuel,Total_fuel, total_price;
int d=1207, P1=118, p2=123;
printf("\nenter the avg fuel of car per km");
scanf("%f",&avg);
fuel=avg*d;
Total_fuel=2*fuel;
P1=P1*fuel;
p2=p2*fuel;
total_price=P1+p2;
printf("\nthe total cost of fuel concumed is %f", Total_fuel);
printf("\nthe total price of fuel consumed is %f", total_price);
}
