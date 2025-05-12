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

    for(int i=n ; i<=n; i--){
        printf("%d\n, ",i);
    }
    return 0;
}