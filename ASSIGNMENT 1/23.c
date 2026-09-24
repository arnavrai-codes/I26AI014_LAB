#include<stdio.h>
int main(){
    int a,b,power=1;
    printf("enter no.:");
    scanf("%d", &a);
    printf("enter power:");
    scanf("%d", &b);
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("result is:%d", power);
}