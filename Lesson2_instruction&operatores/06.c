#include <stdio.h>
//if a number is greater then 9 & less then 100-> true
//(2 digit number)
int main(){
    int x;
    printf("Enter number:");
    scanf("%d",&x);

    printf("%d\n",x>9 && x<100);
    return 0;
}