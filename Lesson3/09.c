#include <stdio.h>

int main()
{
   int number = 8, remainder = number % 2;

   if( remainder == 0) {
    printf("the number is even\n");
   }
   else {
    printf(" the number is odd\n");
   }   

    return 0;
}