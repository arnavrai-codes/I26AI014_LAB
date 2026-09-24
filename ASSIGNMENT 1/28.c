#include<stdio.h>
int main(){
    int n,original_number,digit=0,rem,result=0;
    printf("enter number:");
    scanf("%d",&n);
    original_number=n;
    for(int i=2;n!=0;i++){
        n=n/10;
        digit++;
    }
    n=original_number;
    for(int i=1;n!=0;i++){
        rem=n%10;
        int mul=1;
        for(int i=1;i<=digit;i++){
            mul=mul*rem;
        }
        result=result+mul;
        n=n/10;
    }
    if(result==original_number){
        printf("number is an angstrom number");
    }
    else{printf("number is not an angstrom number");}
    return 0;
}