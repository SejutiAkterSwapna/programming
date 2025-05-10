#include <stdio.h>

int main(){
    int marks;
    printf("Enter number(00-100):");
    scanf("%d",&marks);

    // if(marks >= 0 && marks <= 30){
    //     printf("FAIL\n");
    // }else if(marks > 30 && marks <= 100){
    //     printf("PASS\n");
    // }else{
    //     printf("Wrong marks\n");
    // }
    marks <= 30? printf("FAIL\n"): printf("PASS");
    return 0;
}