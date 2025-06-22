#include<stdio.h>
void print_number(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    print_number(n-1);//

}
int main(){
    print_number(5);

    return 0;
}