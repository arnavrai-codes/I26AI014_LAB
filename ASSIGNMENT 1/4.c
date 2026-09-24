#include <stdio.h>

int main(){
    float temp;
    printf("enter temp:");
    scanf("%f", &temp);
    float celsius_temp;
    celsius_temp=(temp-32)*0.55;
    printf("celsius temp is:%f", celsius_temp);

    return 0;
}