#include <stdio.h>

int main(){
    float basic_salary,hra,da;
    printf("enter basic salary:");
    scanf("%f", &basic_salary);
    printf("enter hra:");
    scanf("%f", &hra);
    printf("enter da:");
    scanf("%f", &da);
    float gross_salary;
    gross_salary=basic_salary+(hra*0.3)+(da*0.9);
    printf("gross salary is %f", gross_salary);
    return 0;
}
