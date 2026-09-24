#include<stdio.h>
int main(){
    float a,b,sum,mul,div;
    printf("enter 1st no.:");
    scanf("%f", &a);
    printf("enter 2nd no.:");
    scanf("%f", &b);
    char c;
    printf("enter operation");
    scanf(" %c", &c);
    switch(c)
    {
        case 's': sum=a+b;
        printf("sum is:%f", sum);
        break;
        case 'm': mul=a*b;
        printf("multiplication is:%f", mul);
        break;
        case 'd': div=a/b;
        printf("division is:%f", div);
        break;
    }
    return 0;
}


