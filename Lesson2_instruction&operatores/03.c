#include <stdio.h>
//even -> 1
//odd -> 0
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    printf("%d\n",number%2==0);
    return 0;
}