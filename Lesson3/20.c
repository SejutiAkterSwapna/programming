#include <stdio.h>

int main(){
    int marks;
    printf("Enter number(00-100):");
    scanf("%d",&marks);

    if(marks <= 30){
        printf("FAIL\n");
    }else{
        printf("PASS\n");
    }

    return 0;
}