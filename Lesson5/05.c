#include <stdio.h>

int main()
{
   double a1,a2,b1,b2,c1,c2,x,y,D;

   printf("a1=");
   scanf("%lf",&a1);
   printf("a2=");
   scanf("%lf",&a2);
   printf("b1=");
   scanf("%lf",&b1);
   printf("b2=");
   scanf("%lf",&b2);
   printf("c1=");
   scanf("%lf",&c1);
   printf("c2=");
   scanf("%lf",&c2);
   
   D= a1*b2 - a2*b1;
   if((int)D==0){
    printf("value of x and y can't be determined.\n");
   }
  else {x= (b2*c1 - b1*c2)/D;
       y= (a1*c2 - a2*c1)/D;

   printf("x=%0.2lf, y=%0.2lf", x,y);
  }
   return 0;
}