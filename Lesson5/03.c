#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2,x,y,Q;
     
    printf("a1=");
    scanf("%lf",&a1);
    printf("a2=");
    scanf("%lf",&a2);
    printf("b1=");
    scanf("%lf",&b1);
    printf("b2=");
    scanf("%lf",&b2);
    printf("c1=");
    scanf("%lf",&c1);
    printf("c2=");
    scanf("%lf",&c1);

    Q = a1*b2 - a2*b1;

    if((int)Q==0){
        printf("value of x and y can not be determined.\n");
    }
    else{ 
        x = (b2*c1 - b1*c2) / Q;
        y = (a2*c1 - a1*c2) / Q;

        printf("x = %0.2lf, y = %0.2lf\n", x,y);

    }
    return 0;
}