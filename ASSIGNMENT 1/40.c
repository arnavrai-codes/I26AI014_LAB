#include <stdio.h>
int main(){
    int n,sum=0;
    for (int i=1;;i++){
        printf("enter number:");
        scanf("%d",&n);
        if(n<0){
            break;
        }
        sum=sum+n;
    }
    printf("sum of numbers is:%d",sum);
    return 0;
}