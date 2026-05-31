
#include <stdio.h>

int main(){
    int c = 0, s = 0;
    while((c = getchar()) != EOF){
        s = s || (c != '0' && c != ' ');
        while(!s && (c = getchar()) != EOF && c == '0');
        if (!s && (c == ' ' || c == '\n' || c == EOF))
            putchar('0');
        s = c != ' ';
        putchar(c);
    }
    return 0;
}