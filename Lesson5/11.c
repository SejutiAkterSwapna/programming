#include <stdio.h>
int main()
{
    int a, b, x, gcd, lcd;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    if(a<b){
        x=a;
    }else{
        x=b;
    }
    for(;x>=1;x--){
        if(a%x==0 && b%x==0){
            gcd=x;
            break;
        }
    }
    printf("GCD is %d\n",gcd);
    lcd= a*b/gcd;
    printf("LCM is %d\n",lcd);
    return 0;
}