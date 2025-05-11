#include <stdio.h>
#include <math.h>
int main(){
    int number,digit,sum=0,x;
    printf("Enter number:");
    scanf("%d",&number);
    x=number;
    while(x!=0){
        digit= x%10;
        sum=sum+pow(digit,3);
        // printf("%d ",digit);
        x= x/10;
    }
    if(sum==number){
        printf("Armstrong number\n");
    }else{
        printf("Not a armstrong number\n");
    }

    return 0;
}