#include <stdio.h>
int main()
{
   int num1, num2;
    char plus, minus, multiply, divide;
    plus = '+';
    minus = '-';
    multiply = '*';
    divide = '/';

    printf("please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number: ");
    scanf("%d", &num2);

    printf("%d %c %d = %d\n", num1,plus, num2, num1 + num2);
    printf("%d %c %d = %d\n", num1, minus,num2, num1 - num2);
    printf("%d %c %d = %d\n", num1, multiply, num2, num1 * num2);
    printf("%d %c %d = %d\n", num1, divide, num2, num1 / num2);
    
    return 0;
}