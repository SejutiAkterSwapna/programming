#include <stdio.h>

int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);

    if(ch >= '0' && ch <= '9'){
        printf("%c is a digit\n", ch);
    }else{
        printf("%c is not a digit\n");
    }
    return 0;
}