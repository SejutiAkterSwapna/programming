#include<stdio.h>

void calculate_price(float value){
    value = value+(0.18*value);
    printf("Final price is:%f\n",value);
}

int main(){
    float value = 100.0;
    calculate_price(value);
    printf("Value is:%f\n",value);

    return 0;
}