#include <stdio.h>
int main()
{
   int ara[10]={10,20,30,40,50,60,70,80,90,100};
   int i;
  
   for(i=9; i>=0; i--){
    printf("%d.The element is: %d\n",i+1,ara[i]);
   }

   return 0;
}