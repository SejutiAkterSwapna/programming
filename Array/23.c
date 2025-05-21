#include <stdio.h>
int main()
{
   int ID [5];
   
   //inout
   int* ptr=&ID[0];
   for(int i=0; i<5; i++){
    printf("%d index: ",i);
    scanf("%d",(ptr+i));
   }
   printf("------------\n");
   //output
   for(int i=0; i<5; i++){
    printf("%d index:%d\n",i,*(ptr+i));
   }
   return 0;
} 