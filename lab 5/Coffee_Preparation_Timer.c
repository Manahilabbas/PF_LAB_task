#include <stdio.h>
int main()
{
int water, sugar,mix1,coffee,milk,mix2,total;
char  type, size;
printf ("Enter your coffee type \n white coffee =W\n black coffee=B");
scanf ("\n %c",&type);
printf ("\nEnter your coffee size \n double =d\n manual=m");
scanf ("\n %c",&size);
switch (type)
          { case 'W' :
           water=15;
           sugar=15;
           mix1=20;
           coffee=2;
           milk=4;
           mix2=20;
           break;
           case 'B' :
           water=20;
           sugar=20;
           mix1=25;
           coffee=15;
           milk=0;
           mix2=25;
           break;
          default:
         printf("\ninput again");}
total= water+ sugar+mix1+coffee+milk+mix2;
switch (size)
       {case'd':
        total=total *150/100;
       break;
       case'm':
       total=total;
       break;
      default:
      printf("\ninput again");}  
printf("\n put water=%d minutes",water);
printf("\n sugar=%d minutes",sugar);
printf("\n mix well=%d minutes",mix1);
printf("\n  add coffee=%d minutes",coffee);
printf("\n add milk=%d minutes",milk);
printf("\n mix well=%d minutes",mix2);
printf("\nwait for %d minutes to get ready your coffee",total);
    return 0;
}
