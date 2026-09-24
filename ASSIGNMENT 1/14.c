
#include <stdio.h> 
int main() {
    char c;
    printf("enter character");
    scanf("%c", &c);
    if(c>='A' && c<='Z') {
    printf("character is capital letter"); 
    }
    else if(c>='a' && c<='z') { 
    printf("character is small case letter");
    }
    else if (c>=0 && c<=9) {
    printf("character is a digit");
    }
    else if ((c>=32 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126)) {
    printf("character is special symbol");
    }
    else{ printf("Input not valid");
    }
    return 0;
}