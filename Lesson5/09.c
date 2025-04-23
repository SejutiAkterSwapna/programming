#include <stdio.h>
int main()
{
    double F, C;
    printf("Enter the temperature in Celsius:");
    scanf("%lf",&C);
    
    F=(C*1.8)+32;
    printf("temperature in Farenheit is:%0.2lf\n",F);

    return 0;
}