#include<stdio.h>

int sum(int x, int y){
    return x+y;
}
int main(){
    int a, b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    int s = sum(a, b);
    printf("sum is:%d\n",s);

    return 0;
}

// int sum(int x, int y){
//     printf("sum is:%d\n",x+y);
//     return x+y;
// }
// int main(){
//     int a, b;
//     printf("Enter first number:");
//     scanf("%d",&a);
//     printf("Enter second number:");
//     scanf("%d",&b);

//      sum(a, b);
   

//     return 0;
// }
  


