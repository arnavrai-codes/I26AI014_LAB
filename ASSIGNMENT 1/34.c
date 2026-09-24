#include <stdio.h>
int main(){
 int n,a=0,b=1,t;
 printf("enter n:");
 scanf("%d", &n);
 if(n>=0){
    printf("0\n");
 }
 if(n>=1){
    printf("1\n");
 }
 for(int i=2;i<=n;i++){
    t=a+b;
    a=b;
    b=t;
    printf("%d\n", t);
 }
}