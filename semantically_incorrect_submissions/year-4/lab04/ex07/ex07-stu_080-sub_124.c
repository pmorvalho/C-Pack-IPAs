
#include <stdio.h>
#define MAX 80

int leLinha(char s[]) {
    int i, c;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c){
    int i, dif;
    for(i = 0; s[i] != '\0'; i++){
        if (s[i] != c){
            s[i - dif] = s[i];
        } else {
            dif++;
        }
    }
    s[i - dif] = '\0';
}

int main(){
    char string[MAX];
    char c;
    leLinha(string);
    c = getchar();

    apagaCaracter(string, c);

    printf("%s\n",string);
    return 0;
}
