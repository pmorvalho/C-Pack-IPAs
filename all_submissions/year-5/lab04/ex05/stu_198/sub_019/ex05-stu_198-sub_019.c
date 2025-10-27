
#include <stdio.h>
#define MAX 80

int leLinha(char s[]){
    int i = 0;
    char c;
    while((c = getchar()) != '\n' && c != EOF){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}
int main(){
    int i, len ;
    char s[MAX];
    len = leLinha(s);
    for(i = 0; i < len; i++){
        putchar(s[i]);
    }
    putchar('\n');
    return 0;
}