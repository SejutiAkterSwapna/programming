// #include<stdio.h>

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//    int fact_Nm1= fact(n-1);
//    int fact = fact_Nm1 * n;
//    return fact;  
// }

// int main(){
//     printf("Factorial is:%d\n",fact(5));
//     return 0;
// }
  
#include<stdio.h>
int print_number(int n){
    if(n==1){
        return 1;
    }
    print_number(n-1);//
    printf("%d\n",n);
}
int main(){
    print_number(5);

    return 0;
}