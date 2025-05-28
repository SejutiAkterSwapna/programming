#include<stdio.h>

void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10);
    print_arr(arr,10);
    return 0;
}