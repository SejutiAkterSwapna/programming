#include<stdio.h>
void print_address(int *n){
    printf("Address of n is:%u\n",n);
}
int main(){
    int n=4;
    print_address(&n);
    printf("Address of n is:%u\n",&n);
    return 0;
}