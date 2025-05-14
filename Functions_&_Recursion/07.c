#include<stdio.h>
#include<math.h>

void calculate_square(int value){

    int sqrt_number = pow(value,2);
    printf("square of %d is:%d\n",value,sqrt_number);   
}
int main(){
    int number;
    printf("enter number:");
    scanf("%d",&number);
    calculate_square(number);
    return 0;
}