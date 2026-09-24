#include <stdio.h>
int main(){
    float u,bill;
    printf("enter units consumed:");
    scanf("%f",&u);
    if(u>=0 && u<=200){
        bill=u*0.50;
         printf("final bill amount is:%f",bill);
    }
    else if(u>=201 && u<=400){
        bill=100+((u-200)*0.65);
        printf("final bill amount is:%f",bill);
    }
    else if(u>=401 && u<=600){
        bill=230+((u-400)*0.80);
        printf("final bill amount is:%f",bill);
    }
    else{
        bill=425+((u-600)*1.25);
        printf("final bill amount is:%f",bill);
    }
    return 0;
}