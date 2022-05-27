#include <stdio.h>

#define  MAX 80

int lelinha(char s[]);

int main(){
    int i, size;
    char s[MAX];
    size = lelinha(s);

    for(i=0; i < size; i++)
        putchar(s[i]);
    putchar('\n');

    return 0;
}

int lelinha(char s[]){
    int i, c;

    for(i = 0; i < MAX-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';

    return i;
}