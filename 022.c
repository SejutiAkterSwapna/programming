#include <stdio.h>
int main()
{
   int num1, num2, sum;
    char plus, minus, multiply, divide;
    plus = '+';
    minus = '-';
    multiply = '*';
    divide = '/';

    printf("please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("%d %c %d = %d\n", num1,plus, num2, sum);
    sum = num1 - num2;
    printf("%d %c %d = %d\n", num1, minus,num2, sum);
    sum = num1 * num2;
    printf("%d %c %d = %d\n", num1, multiply, num2, sum);
    sum = num1 / num2;
    printf("%d %c %d = %d\n", num1, divide, num2, sum);
    
    return 0;
}