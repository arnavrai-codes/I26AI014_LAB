#include <stdio.h>
int main(){
    int n,square;
    printf("enter N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        square=i*i;
        printf("%d\t",square);
    }
}