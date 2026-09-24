#include <stdio.h>
int main(){
    int sec,day,hour,min;
    printf("enter day:");
    scanf("%d", &day);
    printf("enter hour:");
    scanf("%d", &hour);
    printf("enter min:");
    scanf("%d", &min);
    sec = day*(3600*24)+hour*3600+min*60;
    printf("time in sec is:%d", sec);
    return 0;

}