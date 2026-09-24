#include <stdio.h>

int main() {
    
    float p;
    printf("enter p:");
    scanf("%f", &p);
    float r;
    printf("enter r:");
    scanf("%f", &r);
    float t;
    printf("enter t:");
    scanf("%f", &t);
    float si;
    si=(p*r*t)/100;
    printf("si is: %f", si);

    return 0;
}