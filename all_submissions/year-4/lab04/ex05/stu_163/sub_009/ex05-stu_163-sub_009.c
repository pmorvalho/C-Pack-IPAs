
#include <stdio.h>
#define MAXSTRING 80

int lelinha(char s[]){
    char c;
    int i=0;
    while ((c = getchar()) != '\n' && c != EOF){
        s[i++] = c;
    }
    s[i]= '\0';
    return i;
}

int main(){
    char str[MAXSTRING];
    lelinha(str);
    printf("%s\n", str);
}