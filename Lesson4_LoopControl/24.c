#include <stdio.h>

int main(){    
    int n;
    printf("Enter number:");
    scanf("%d",&n);
   //  for(int i=1;i<=10;i++){
   //     printf("%d*%d=%d\n",n,i,n*i);
   //  }

   // int i=1;
   // while(i<=10){
   //     printf("%d*%d=%d\n",n,i,n*i);
   //     i++;
   // }

   int i=1;
   do{
       printf("%d*%d=%d\n",n,i,n*i);
       i++;
   }while(i<=10);
   return 0; 
}