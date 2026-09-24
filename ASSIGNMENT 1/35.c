#include <stdio.h>
int main(){
    int n,rem,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;n!=0;i++){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits is %d",sum);
}