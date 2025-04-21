#include <stdio.h>

int main()
{
   double lone_amount, interest_rate, number_of_years,total_amount,mounthly_amount;
   
   printf("enter the lone amount:");
   scanf("%lf",&lone_amount);
   printf("enter the interest rate:");
   scanf("%lf",&interest_rate);
   printf("number of years:");
   scanf("%lf",&number_of_years);

   total_amount=lone_amount+lone_amount*interest_rate*number_of_years/100.00;
   mounthly_amount=total_amount/(number_of_years*12);

   printf("total amount:%0.2lf", total_amount);
   printf("mounthly amount:%0.2lf",mounthly_amount);
   
   return 0;
}