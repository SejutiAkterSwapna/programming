#include<stdio.h>
int main(){
    int age=20;
    int _age=23;
    int *ptr=&age;
    int *_ptr=&_age;

    printf("%u & %u difference=%u\n", ptr,_ptr,ptr-_ptr);
    _ptr=&age;
    printf("comparison=%u\n", ptr==_ptr);
    return 0;
}