#include<stdio.h>

//recursive function 
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}
int main(){
    printHW(5);
    return 0;
}