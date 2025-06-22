#include <stdio.h>
int main()
{
    int v, t,s;
    printf("enter the number of velocity:");
    scanf("%d",&v);
    printf("enter the number of time:");
    scanf("%d",&t);

    s=2*t*v;

    printf("Displacement is:%d\n",s);

    return 0;
}