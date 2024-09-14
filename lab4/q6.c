
#include <stdio.h> 
int main()
{
int cost,saved_amt,cost_discount,amt_discount;
	float discount_amt;
	printf("Enter cost of shopping: ");
	scanf("%d", &cost);

	if (cost < 500)
		printf("Discount not applicable");
	    else if (cost >=500 && cost<=2000){
		saved_amt = (cost * 5)/100;
	}
		else if (cost > 2000 && cost <= 4000){
		saved_amt = (cost * 10)/100;
	}
		else if (cost > 4000 && cost <= 6000){
		saved_amt = (cost * 20)/100;

	}
		else if (cost > 6000){
		saved_amt = (cost * 35)/100;
	}
           amt_discount = cost - saved_amt;
           printf("Actual amount: %d \n", cost);
           printf("Saved amount: %d \n", saved_amt);
           printf("Amount after discount: %d", amt_discount);
	return 0;
}
