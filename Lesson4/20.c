#include <stdio.h>

int main()
{    
    int n,sum=0; 
    printf("inter number:");
    scanf("%d",&n);
    for(int i=1 ; i<=n; i++){
       sum=sum+i;
    }
    printf("Sum is:%d\n",sum);

    return 0;
}