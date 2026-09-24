#include <stdio.h>
int main() {
int marks;
printf ("enter marks");
scanf("%d", &marks);
if(marks>=90 && marks<= 100){
    printf("grade is: A+");
}
else if(marks>=80 && marks<90){
    printf("grade is: A");
}
else if(marks>=70 && marks<80){
    printf("grade is: B");
}
else if(marks>=60 && marks<70){
    printf("grade is: C");
}
else if(marks>=50 && marks<60){
    printf("grade is: D");
}
else if(marks>=40 && marks<50){
    printf("grade is: E");
}
else {printf("fail");
}
return 0;
}