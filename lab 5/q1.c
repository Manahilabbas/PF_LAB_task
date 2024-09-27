#include <stdio.h> 
int main()
{
int fat,calaries, total_calaries;
float percent , fat_calaries;
printf ("enter ammount of fat and calaries in grams ");
scanf("%d %d",&fat ,& calaries);
fat_calaries=fat*9;
total_calaries=fat_calaries+calaries;
percent = fat_calaries/total_calaries*100;
printf ("percentage of calaries that come from fat is %f", percent);
}