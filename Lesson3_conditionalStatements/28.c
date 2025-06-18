#include <stdio.h>
#include <math.h>
int main(){ 
    int num1, num2, num3, armstrong, number;
    printf("Enter three different number: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    
    armstrong = pow(num1,3) + pow(num2,3) + pow(num3,3);
    
    return 0;
}