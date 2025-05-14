#include<stdio.h>
void print_number(int n){
    if(n==0){
        return;
    }
    print_number(n-1);//
    printf("%d\n",n);

}
int main(){
    print_number(5);

    return 0;
}