#include <stdio.h>

int main() {
   float phy;
    printf("enter phy:");
    scanf("%f", &phy);
    float chy;
    printf("enter chy:");
    scanf("%f", &chy);
    float mat;
    printf("enter mat:");
    scanf("%f", &mat);
    float eng;
    printf("enter eng:");
    scanf("%f", &eng);
    float hin;
    printf("enter hin:");
    scanf("%f", &hin);
    float total;
    total=phy+chy+mat+eng+hin;
    printf("total is:%f", total);
    float percentage;
    percentage=total/5;
    printf("percentage is:%f", percentage);
    return 0;
}