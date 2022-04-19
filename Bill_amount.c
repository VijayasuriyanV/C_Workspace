#include <stdio.h>

int main()

{

	float total_amt,amt, sub_total,discount_amt, tax_amt,qty,val,discount,tax;

	printf ("\n Enter the quantity of item sold: ");

	scanf("%f",&qty);

	printf("\n Enter the value of item: ");

	scanf("%f", & val);

	printf("\n Enter the discount percentage: ");

	scanf("%f", &discount); 

	printf("\n Enter the tax: ");

	scanf("%f", &tax);

	

	amt = qty * val;

	discount_amt = (amt * discount)/100.0;

	sub_total = amt - discount_amt;

	tax_amt =(sub_total * tax)/100.0;

	total_amt = sub_total + tax_amt;

	

	printf("\n\n\n ************BILL***********");

	printf("\n Quantity Sold: %.2f", qty);

	printf("\n Price per item: %.2f",val);

	printf("\n ----------------");

	printf("\n Amount:%.2f",discount_amt);

	printf("\n Discount:%.2f",discount_amt);

	printf("\n Discounted total: %.2f", sub_total);

	printf("\n Tax_amt:  %.2f", tax_amt);

	printf("\n--------------------");

	printf("\n Total amount %.2f", total_amt);

	return 0;

}
