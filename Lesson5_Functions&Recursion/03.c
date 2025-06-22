#include<stdio.h>

void salam();
void bonjour();

int main(){
    printf("Enter b for Bangladesh & f for french: ");
    char ch; 
    scanf("%c",&ch);

    if(ch=='b'){
        salam();
    }else{
        bonjour();
    }
     
    return 0;
}

void salam(){
    printf("Salam\n");
}
void bonjour(){
    printf("Bonjour\n");
}
