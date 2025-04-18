#include <stdio.h>
int main()
{
   int num1, num2, sum;
    char a, b, c, d;
    a = '+';
    b = '-';
    c = '*';
    d = '/';

    printf("please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("%d %c %d = %d\n", num1,a, num2, sum);
    sum = num1 - num2;
    printf("%d %c %d = %d\n", num1, b,num2, sum);
    sum = num1 * num2;
    printf("%d %c %d = %d\n", num1, c, num2, sum);
    sum = num1 / num2;
    printf("%d %c %d = %d\n", num1, d, num2, sum);
    
    return 0;
}