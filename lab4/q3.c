#include <stdio.h>
int main()
{
int number_1, number_2;
char o;
printf("enter numbers and operator");
scanf("%d %d %c",&number_1 ,&number_2 ,&o);
 
switch(o)
{
case '+':
printf("the result is % d",number_1+number_2);
break;
case '-':
printf("the result is %d",number_1-number_2);
break;
case '*':
printf("the result is %d",number_1*number_2);
break;
case '/':
printf("the result is %d",number_1/number_2);
break;
default:
printf("invalid");
break;
}
}
