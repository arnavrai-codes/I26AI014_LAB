#include <stdio.h>
int main(){
    int sec,day,hour,min;
    printf("enter sec:");
    scanf("%d", &sec);
    day=sec/(3600*24);
    hour=(sec%(3600*24))/3600;
    min=((sec%(3600*24))%3600)/60;
    printf("%d day %d hour %d min", day, hour, min);

    return 0;

}