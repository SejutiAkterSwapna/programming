#include <stdio.h>
int main ()
{
   int dividend, divisor, quotient,sum,rem;
  


   printf("typr a dividend:");
   scanf("%d/n", &dividend);

   printf("type a divisor:");
   scanf("%d", &divisor);

   quotient = dividend /divisor;
   sum = quotient * divisor;
   rem = dividend - sum;


    printf("Remainder is %d\n", rem);


    return 0;
    
}