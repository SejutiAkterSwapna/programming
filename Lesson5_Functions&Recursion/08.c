#include<stdio.h>

float square_area(float side){
    return side*side;
}
float circle_area(float red){
    return 3.14*red*red;
} 
float rectangle_area(float a, float b){
    return a*b;
}

int main(){
    float a=5.0;
    float b=10.0;
    printf("Area is:%f\n",rectangle_area( a, b));
    return 0;
}