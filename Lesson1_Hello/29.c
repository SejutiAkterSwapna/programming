#include <stdio.h>
//Perimeter of rectangle
int main (){
    int a, b, perimeter;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    perimeter= 2*(a+b);

    printf("Perimeter of rectangle is:%d\n",perimeter);
    return 0;
}