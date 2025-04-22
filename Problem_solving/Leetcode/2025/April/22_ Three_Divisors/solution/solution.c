#include <stdio.h>
int main()
{
    int n, i,count=0;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i == 0){
            printf("%d ",i);
            count++;
        }
    }
    if(count==3){
        printf("\nyes\n");
    }else{
        printf("\nNo\n");
    }

  return 0;
    
}