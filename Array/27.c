#include<stdio.h>

int count_odd(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){//odd
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("%d\n",count_odd(arr,9));
    return 0;
}