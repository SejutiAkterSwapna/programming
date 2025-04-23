#include <stdio.h>
int main()
{
    int last_number,sum;

    printf("Enter the last number:");
    scanf("%d",&last_number);
   
    sum=last_number*(last_number+1)/2;

    printf("sum is = %d\n",sum);

    return 0;

}