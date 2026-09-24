#include<stdio.h>
int main(){
    int n,sumodd,sumeven;
    printf("enter no:");
    scanf("%d", &n);
    sumodd=0;
    for(int i=1;i<=n;i=i+2){
        sumodd= sumodd+i;
    }
    sumeven=0;
    for(int i=2;i<=n;i=i+2){
        sumeven= sumeven+i;
    }
    printf("sum of odd no is:%d", sumodd);
    printf("sum of even no is:%d", sumeven);
    return 0;

}