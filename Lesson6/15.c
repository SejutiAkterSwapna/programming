#include <stdio.h>
int main()
{
    int marks, i,count;
    int total_marks[]={51,50,53,51,55,57,53,51,50,60};

    for(marks=50; marks<=60;marks++){
        count= 0;
        for(i=0; i<10; i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
        printf("Marks:%d  Count:%d\n",marks,count);
    }

    return 0;
}