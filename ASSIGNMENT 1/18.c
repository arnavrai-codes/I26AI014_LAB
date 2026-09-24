#include<stdio.h>
int main(){
   int a,b,c;
    printf("enter first no:");
    scanf("%d", &a);
    printf("enter second no:");
    scanf("%d", &b);
    printf("enter third no:");
    scanf("%d", &c);
    (a>b && a>c)? printf("%d", a):((b>c && b>a)? printf("%d", b): printf("%d", c));
    return 0;
}