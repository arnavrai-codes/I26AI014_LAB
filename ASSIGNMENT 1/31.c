#include <stdio.h>
int main(){
    int n,sum=0,rem;
    printf("enter number");
    scanf("%d", &n);
    for(int i=1;n!=0;i++){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d", sum);
    return 0;
}