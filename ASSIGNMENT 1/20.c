#include<stdio.h>
int main(){
    int a,b,sum,sub,mul;
    float div;
    printf("enter 1st no");
    scanf("%d", &a);
    printf("enter 2st no");
    scanf("%d", &b);
    char cal;
    printf("enter operation");
    scanf(" %c", &cal);
    switch (cal)
    {
    case '+':
    sum= a+b;
    printf("%d", sum);
    break;
    case '-':
    sub= a-b;
    printf("%d", sub);
    break;
    case '*':
    mul= a*b;
    printf("%d", mul);
    break;
    case '/':
    div= a/b;
    printf("%f", div);
    break;
    }
    return 0;
}