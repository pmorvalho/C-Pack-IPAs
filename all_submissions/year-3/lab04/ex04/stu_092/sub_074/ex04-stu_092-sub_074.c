
#include <stdio.h>

#define MAX 80

int length(char string[]){
    int len;
    for (len = 0; string[len] != '\0'; len++);
    return len;
}

int main(){
    char s[MAX];
    int len, i, palidromo;
    scanf("%s", s);
    len = length(s);
    for (i = 0; i < len; i++){
        if (s[i] == s[len-i-1] || len == 0)
            palidromo = 1;
        else
            palidromo = 0;
    }
    if (palidromo == 1)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}