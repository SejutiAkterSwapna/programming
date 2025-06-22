#include <stdio.h>
int main()
{
    int last_number,sum=0,handshakes;

    printf("Enter the last number:");

    scanf("%d",&last_number);

    for(int i=1; i<=last_number; i++){
        sum= sum+i;
        handshakes= sum-i;
    }
    printf("the number of people handshakes is:%d\n",handshakes);

    return 0;

}