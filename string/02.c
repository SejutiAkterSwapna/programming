#include <stdio.h>

void print_string(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main (){
    char first_name[]="Sejuti";
    char last_name[]="Swapna";

    print_string(first_name);
    print_string(last_name);
    return 0;
}