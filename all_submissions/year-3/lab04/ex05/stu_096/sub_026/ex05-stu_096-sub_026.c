
#include <stdio.h>
#define MAX 100
int lelinha(char s[]);
int main(){
    char c, v[MAX];
    int i, e;
    c = getchar();
    for (i = 0; i  <= (MAX-1) && c != '\n' && c != EOF; i++){
        v[i] = c;
        putchar(c);
        c = getchar();
    }
    printf("%c", v);
    e = lelinha(v);
    printf("%d", e);
    return 0;
}
int lelinha(char s[]){
    int i, d, n;
    for (i = 0; (d != '\n' && d != EOF); i++){
    n++;
    }
    return n;
}