#include <stdio.h>
int main()
{
   int ID [5];
   
   //inout
   int* ptr=&ID[0];
   for(int i=0; i<5; i++){
    printf("%d index: ",1+i);
    scanf("%d",&ID[i]);
   }
   printf("------------\n");
   //output
   for(int i=0; i<5; i++){
    printf("%d index:%d\n",1+i,ID[i]);
   }
   return 0;
} 