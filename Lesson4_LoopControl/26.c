#include <stdio.h>

int main()
{
    do{
        int n;
        printf("Enter number : ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2!=0){
            break;
        }

    }while(1);
    printf("thank you\n");

    // int n;
    // while(1){
    //     printf("Enter number:");
    //     scanf("%d",&n);
    //     printf("%d\n",n);
    //     if(n%2!=0){
    //         break;
    //     }
    // }
    // printf("Thank you\n");
    // return 0;
}