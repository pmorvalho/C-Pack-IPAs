
#include <stdio.h>

void apagaCaracter(char s[], char c){
    int i = 0;
    while(s[i] != EOF && s[i] != '\0'){
        if (s[i] != c){
            putchar(s[i]);
        }
        i++;
    }
    putchar('\n');
}

int main(){
    char s[100], chara;
    fgets(s, sizeof(s), stdin);
    chara = getchar();
    apagaCaracter(s, chara);
    return 0;
}

