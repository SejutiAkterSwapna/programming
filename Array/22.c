#include<stdio.h>
int main(){
    int n=5;
    int *ptr=&n;

    int* ptr1= ptr+1;
    int* ptr2= ptr+2;
    int* ptr3= ptr+3;
    int* ptr4= ptr-1;
    int* ptr5= ptr-2;
    int* ptr6= ptr-3;

    printf("ptr = %u\n", ptr);
    printf("ptr1 = %u\n", ptr1);
    printf("ptr2 = %u\n", ptr2);
    printf("ptr3 = %u\n", ptr3);
    printf("ptr4 = %u\n", ptr4);
    printf("ptr5 = %u\n", ptr5);
    printf("ptr6 = %u\n", ptr6);
    printf("------------------------------\n");

    int dif1= ptr3-ptr5; //5
    int dif2= ptr2-ptr4; // 3
    int dif3= ptr4-ptr2; // -3
    int dif4= ptr3-ptr6; // 6
    int dif5= ptr6-ptr3; // -6

    printf("dif1= %d \n", dif1);
    printf("dif2= %d \n", dif2);
    printf("dif3= %d \n", dif3);
    printf("dif4= %d \n", dif4);
    printf("dif5= %d \n", dif5);
    
    return 0;
}