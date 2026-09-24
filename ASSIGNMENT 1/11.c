#include <stdio.h>
int main(){
    int total_second,day,hour,min,sec;
    printf("enter total sec:");
    scanf("%d", &total_second);
    day=total_second/(3600*24);
    hour=(total_second%(3600*24))/3600;
    min=((total_second%(3600*24))%3600)/60;
    sec=((total_second%(3600*24))%3600)%60;
    printf("time is:%d:%d:%d:%d", day, hour, min, sec);

    return 0;

}