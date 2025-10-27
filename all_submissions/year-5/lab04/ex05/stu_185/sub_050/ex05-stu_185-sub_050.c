
#include <stdio.h>
#include <string.h>
#define MAX 80

int leLinha(char s[]){
    if (fgets(s, MAX, stdin) == NULL) return 1;
    int c = strlen(s);
    if (c > 0 && s[c - 1] == '\n') s[c - 1] = '\0';
    return c;
}
int main(){
    char s[MAX];
    leLinha(s);
    printf("%s\n", s);
    return 0;
}