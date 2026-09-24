#include<stdio.h>
int main(){
    int n,prime=1;
    printf("enter no.:");
    scanf("%d", &n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
         printf("no. is prime");
    }
    else if(prime==0){
         printf("no. is not prime");
    }
    return 0;
}   