#include <stdio.h>
int main()
{
    double F, C;
    printf("Enter the temperature in Farenheit:");
    scanf("%lf",&F);
    
    C=(F-32)*1.8;
    printf("temperature in Celsius is:%0.2lf\n",C);
    

    return 0;  
}