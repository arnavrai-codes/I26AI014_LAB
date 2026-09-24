#include<stdio.h>
#include<math.h>
int main(){
    float x,n;
    printf("enter x:");
    scanf("%f", &x);
    printf("enter n:");
    scanf("%f", &n);
    float y;
    if(n==1){
        y= 1+x;
        printf("y is:%f", y);
    }
    else if(n==2){
        y=1+(x/n);
        printf("y is:%f", y);
    }
    else if(n==3){
        y=1+pow(x,n);
        printf("y is:%f", y);
    }
    else{
        y=1+(n*x);
        printf("y is:%f", y);
    }
    return 0;
}