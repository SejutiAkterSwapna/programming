#include <stdio.h>
int main()
{
    int num1, num2, sum, dif,mul ,div;
    printf("please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    dif = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, dif);
    printf("%d * %d = %d\n", num1, num2, mul);
    printf("%d / %d = %d\n", num1, num2, div);
    
    return 0;
}