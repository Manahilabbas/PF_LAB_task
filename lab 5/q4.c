#include <stdio.h>
int main()
{
float pH;
printf("enter pH");
scanf("%f",&pH);
if (pH>7)
{if (pH<12)
printf("alkaline");
else 
printf("very alkaline");}
else if (pH==7)
printf("neutral");
else if (pH>2)
printf("acidic");
else
printf("very acidic");
return 0;}
