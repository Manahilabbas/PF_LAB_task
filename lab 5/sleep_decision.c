#include <stdio.h>
int main()
{
char weekdays ,vacations ;
printf("are you on a  weekdays?\n enter T for yes and F for no ");
scanf ("%c", & weekdays);
printf("are you on a  vacations?\nenter T for yes and F for no ");
scanf("\n %c", & vacations);
if (weekdays=='F' || vacations =='T')
{printf ("sleep=true");}
else 
printf ("sleep =false");
}
