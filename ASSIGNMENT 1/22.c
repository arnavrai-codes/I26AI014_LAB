#include<stdio.h>
int main(){
    int n;
    printf("enter no:");
    scanf("%d", &n);
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    printf("factotial is:%d", fac);
}