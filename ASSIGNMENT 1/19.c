#include<stdio.h>
int main(){
char c;
printf("enter character:");
scanf("%c", &c);
(c>=97 && c<=122)? printf("small case character"):printf("not small case character");
}
