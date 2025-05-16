#include<stdio.h>

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fib_N_m1 = fib(n-1);
    int fib_N_m2 = fib(n-2);
    int fib_N = fib_N_m1+fib_N_m2;
    // printf("Fibonacci of %d is:%d\n",n,fib_N);
    return fib_N;
}
int main(){
    printf("Fibonacci is=%d\n",fib(6)); 

    return 0;
}