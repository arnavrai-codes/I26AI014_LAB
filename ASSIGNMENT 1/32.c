#include <stdio.h>
void reverse(int arr[],int n);
int main(){
    int arr[]={1,2,5,4,7,3};
    reverse(arr,6);
    return 0;
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
       int first_no=arr[i];
       int second_no=arr[n-i-1];
       arr[i]=second_no;
       arr[n-i-1]=first_no;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}