#include<stdio.h>
void do_work(int a, int b, int sum, int prod, int avg){
    sum = a+b;
    prod = a*b;
    avg = (a+b)/2;
    printf("sum=%d, prod=%d, avg=%d\n",sum,prod,avg);
} 
int main(){
    int a = 3, b = 5;
    int sum, prod, avg;
    do_work(a,b,sum,prod,avg);
    
return 0;
}