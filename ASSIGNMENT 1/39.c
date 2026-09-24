#include <stdio.h>
int main(){
    int n;
    float sum=0,mul=1;
    printf("enter N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            mul=mul*j;
        }
        sum=sum+(i/mul);
        mul=1;
    }
    printf("%f",sum);
    return 0;
}