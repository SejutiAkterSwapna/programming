#include <stdio.h>
int main(){
    int i=0,n;
    printf("inter number:");
    scanf("%d",&n);

    do{
        printf("%d\n",i);
        i++;           
    }while(i<=n);
    
    return 0;
}
