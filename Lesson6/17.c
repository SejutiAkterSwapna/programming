#include <stdio.h>
int main()
{
    int i;
    int total_marks[]={26,23,27,23,29,26,22,23,25,27};
    int marks_count[31];

    for(i=0;i<31; i++){
        marks_count[i]=0;
    }
    for(i=0; i<10; i++){
        marks_count[total_marks[i]]++;
    }
    for(i=20; i<=30; i++){
        printf("Marks:%d  Count:%d\n",i, marks_count[i]);
    }

    return 0;
}