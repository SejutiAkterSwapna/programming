#include <stdio.h>

int main()
{
    int n,fact=1;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    printf("factorial is =%d\n",fact);

// int n, fact=1;
// printf("Enter number:");
// scanf("%d",&n);
// int i=1;
// while(i<=n){
//     fact=fact*i;
//     i++;
// }
// printf("%d factorial ia :%d\n",n,fact);
    return 0;
}