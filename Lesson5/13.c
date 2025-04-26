#include <stdio.h>
int main()
{
    int num1,num2,n1,gcd;
    printf("inter the numbers:");
    scanf("%d %d",&num1,&num2);

    if(num1==0){
        gcd=num1;
    }
    else if(num2==0){
        gcd=num2;
    }
    else{
        while(num2!=0){
            n1=num2;
            num2=num1%num2;
            num1=n1;
        }
        gcd=num1;
    } 
    printf("GCD is %d\n",gcd);
    return 0;
}