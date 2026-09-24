#include<stdio.h>
int main(){
    int n,rem;
    printf("enter number:");
    scanf("%d", &n);
    for(int i=1;n!=0;i++){
        rem=n%10;
        printf("%d", rem);
        n=n/10;
    }
    return 0;
}