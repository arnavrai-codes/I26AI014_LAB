#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter first no.");
    scanf("%d", &a);
    printf("enter second no.");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("first no is: %d", a);
    printf("second no is: %d", b);
    return 0;

}