#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    int sum_N_m1 = sum(n-1);//sum of 1 to n
    int sum_N = sum_N_m1 + n;
    return sum_N;
}
int main(){
   printf("Sum is:%d\n",sum(5));

    return 0;
}