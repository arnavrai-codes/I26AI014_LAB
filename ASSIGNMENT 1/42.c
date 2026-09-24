#include <stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("number is a composite number");
            break;
        }
    }
}