
#include <stdio.h>
#include <string.h>

#define MAX 80

int lelinha(char s[]){
    return strlen(s);
}

int main(){
    char s[MAX], c;
    int i = 0;

    while ((c = getchar()) != EOF && c != '\n'){
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    printf("%s\n", s);
    return 0;
}