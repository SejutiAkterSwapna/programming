#include<stdio.h>
int even_sum(int n){
    if(n==2){
        return 2;
    }

    int sum= even_sum(n-1);
    int adding_n= n%2==0 ? n: 0;
    return sum+n;
    

}
int main(){
    printf("Sum is %d\n", even_sum(5));

    return 0;
}