#include <stdio.h>

int main() {
    float cm,m,p,c,e;
    printf("enter m:");
    scanf("%f", &m);
    printf("enter p:");
    scanf("%f", &p);
    printf("enter c:");
    scanf("%f", &c);
    printf("enter e:");
    scanf("%f", &e);
    cm=(m+p+c)/2+e;
    printf("cut off marks are:%f", cm);

    return 0;
}