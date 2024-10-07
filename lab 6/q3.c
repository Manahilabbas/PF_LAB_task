#include <stdio.h>
int main()
{
	
int num,a, series,prev,next,i;
prev=0;
next=1;

printf("Enter number:\n");
scanf("%d",&num);
for(a=2;a!=num;a++){
	if(num%a==0)
	{printf("number is not prime");
	a=1;
	break;}
}
if(a!=1)
{ printf("number is prime");
a=0;
}
printf("Fibonacci series is:\n");
if(a==0) 
{
printf("Fibonacci series: \n");
    printf("%d, %d", prev, next);
    for (i = 3; i <= num; i++) { 
        series = prev + next;  
        printf(", %d", series); 
        prev = next;
        next = series;
}}
}