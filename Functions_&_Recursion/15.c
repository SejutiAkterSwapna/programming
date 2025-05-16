#include<stdio.h>
// F = (C*1.8)+32
float convert_temp(float celsius){
    float fahrenheit = celsius * 1.8 + 32;
    return fahrenheit; 
}
int main(){
   float fahrenheit = convert_temp(32);
   printf("far:%0.2f\n", fahrenheit);

    return 0;
}