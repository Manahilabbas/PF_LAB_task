{
int id, units;
char name[100];
float charge,bill ,charge_ammount;
printf("enter costommer id");
scanf("%d",&id);
printf("enter customer name ");
scanf("%s", name);
printf("enter unit consumed");
scanf("%d",&units);
if (units<= 199)
{bill=16.2*units;
charge=16.2;}
else if(units>=200 && units <300)
{bill =20.10*units;
charge=20.10;}
else if(units>=300 && units <500)
{bill=27.10*units;
charge=27.10;}
else if(units>500)
{bill =35.9*units;
charge=35.9;}
if (bill>18000)
charge_ammount=bill*(15.0/100);
else
charge_ammount=0;
printf("Customer ID:%d \n",id);
printf("Customer Name:%s \n",name);
printf("unit consumed:%d\n",units);
printf("Ammount charge %.2f per uni:%.2f\n", charge ,bill);
printf("Surcharged ammount:%.2f \n",charge_ammount);
printf("Net ammount paid by customer: %.2f \n",charge_ammount+bill);
return 0;
}


