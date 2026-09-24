#include<stdio.h>
#include <math.h>
int main(){
    int n,rem,orignal,rev=0,dig=0;
    printf("enter number:");
    scanf("%d",&n);
    orignal=n;
    for(int i=1;n!=0;i++){
        n=n/10;
        dig++;
    }
    n=orignal;
    for(int i=1;n!=0;i++){
        rem=n%10;
        rev=rem*pow(10.0,dig-1)+rev;
        n=n/10; 
        dig--;
    }
    n=orignal;
    if(n==rev){
        printf("number is a pallindrome");
    }
    else{
        printf("number is not a pallindrome");
    }
    return 0;
}