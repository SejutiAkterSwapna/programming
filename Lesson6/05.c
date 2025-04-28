#include <stdio.h>
 int main()
 {
    int s[10];
    printf("\naddress of s(main array)= %p\n", (void*)s);
    printf("\naddress of s+1= %p\n", (void*)(s+1));

    for(int i=0;i<10; i++){
        printf("\naddress of s%d= %p", i, (void*)&s[i]);
    }
    printf("\n");
    return 0;
 }