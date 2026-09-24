#include <stdio.h>
int main(){
    float sales,com;
    printf("enter sales:");
    scanf("%f",&sales);
    if(sales>=0 && sales<=500){
        com=sales*0.05;
        printf("%f",com);
    }
    else if(sales>500 && sales<=2000){
        com=35+((sales-500)*0.1);
        printf("%f",com);
    }
    else if(sales>2000 && sales<=5000){
        com=185+((sales-2000)*0.12);
        printf("%f",com);
    }
    else{
        com=sales*0.125;
        printf("%f",com);
    }
}