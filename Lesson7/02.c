#include <stdio.h>
int add(float num1, float num2){
    float sum = num1+num2;
    return sum;
}
int main(){
    float a, b, c;
    a=2.8, b=2.7;
    c= add(a,b);
    printf("%f\n",c);
   
    return 0;
}