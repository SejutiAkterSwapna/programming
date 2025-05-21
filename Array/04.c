#include <stdio.h>
 int main()
 {
    int s[10];
    for(int i=1;i<=10; i++){
        printf("\nenter the number of student s%d:",i);
        scanf("%d",&s[i-1]);     
    }

    printf("------------------------");

    for(int i=1;i<=10; i++){
        printf("\ns%d= %d",i, s[i-1]);
    }
    printf("\n");
    return 0;
 }