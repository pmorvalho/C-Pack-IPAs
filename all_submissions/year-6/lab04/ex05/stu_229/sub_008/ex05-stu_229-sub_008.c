
#include <stdio.h>

int leLinha(char s[]){
    int c, i = 0;
    while((c = getchar()) != '\n' && c != EOF){
        s[i++] = c;
    }
    s[i] = '\0';
    return c;
}
int main(){
    char s[80] = "";
    leLinha(s);
    printf("%s\n", s);
    return 0;
}