#include <stdio.h>
int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    age >= 18 ? printf("About\n") : printf("Not about\n");

    return 0;
}