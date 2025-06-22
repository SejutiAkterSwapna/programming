#include<stdio.h>

int calc_percentage(int science,int math,int english){
    return((science+math+english)/3);
}
int main(){
   int science=95;
   int math=91;
   int english=88;
   printf("percentage is:%d\n",calc_percentage( science, math,english));
   

    return 0;
}