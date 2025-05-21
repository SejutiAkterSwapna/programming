#include <stdio.h>
void _square(int* ptr){
    *ptr = (*ptr) * (*ptr);//4*4
}

int main ()
{
    int number =4;
    int* ptr= &number;
    // printf("%u\n", &number);
    // printf("%u\n", ptr);
    // printf("%u\n", &ptr);

    printf("number=%d\n",number);
    _square(ptr);
    printf("number=%d\n",number);
    return 0;
}