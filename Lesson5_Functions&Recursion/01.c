#include<stdio.h>

void printHello();//Declaration/prototype.

int main(){
    printHello();//Function call.
    printHello();
    printHello();
    printHello();
    return 0;
}
//Function definition.
void printHello(){
    printf("Hello!\n");
    printf("My name is Sejuti.\n");
}