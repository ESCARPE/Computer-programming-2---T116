/*ESCARPE, VANESSA T. BSIT 1A T116
+ Write a program in C to calculate and print the Electricity bill of a given customer.
+ The customer ID., and Unit Consumed by the user should be inputted.
+ Print All Customer Data (Customer ID., Unit Consumed, Unit Charges, Surcharge, Customer Total Bill*/

#include <stdio.h>
#include <string.h>
int main()
{
   int custid, conu;
   float chg, surchg=0, gramt,netamt;
   char connm[50];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conu);

   if (conu >=199 )
	chg = 1.50;
   else	if (conu>=250 && conu<=400)
		chg = 1.60;
	else if (conu>=450 && conu<=600)
			chg = 1.85;
		else (conu>=600);
			    chg = 2.00;

   gramt = conu*chg;
   if (gramt>300)
	surchg = gramt*10/100.0;
    netamt = gramt+surchg;

   if (netamt  < 100)
	netamt =100;

   printf("\nElectricity Bill\n");
   printf("Customer ID#                        :%d\n",custid);
   printf("unit Consumed                       :%d\n",conu);
   printf("unit Charges @P. %4.2f  per unit    :P%8.2f\n",chg,gramt);
   printf("Surchage Amount                     :P%8.2f\n",surchg);
   printf("Total Customer Bill                 :P%8.2f\n",netamt);

   return 0;
}
