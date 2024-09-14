#include <stdio.h>
int main()
{char c;
printf("enter a charector");
scanf("%c",&c);
if (c>='a' && c<='z')
printf("small alphabets");
else if (c>='A' && c<='Z')
printf("capital alphabets");
else if (c>='0')
printf("digits");
else
printf("speciall charector");

}