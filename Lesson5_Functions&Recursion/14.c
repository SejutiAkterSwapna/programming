#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    int fact_N_m1 = fact(n-1);//Factorial of 1 to n
    int fact_N = fact_N_m1 * n;
    return fact_N;
}
int main(){
   printf("Factorial is:%d\n",fact(4));

    return 0;
}