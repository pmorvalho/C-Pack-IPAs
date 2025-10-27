
#include <stdio.h>

void apagaCaracter(char s[], char c){
    int i, offset;
    i = 0;
    offset = 0;
    while(s[i] != '\n' && s[i] != EOF){
        if (s[i] == c){
            offset++;
        }
        s[i] = s[i + offset];
        i++;
    }
}

int leLinha(char s[]){
    int i, cont;
    i = 0;
    while (s[i] != EOF && s[i] != '\n'){
        cont++;
        i++;
    }
    return cont;
}

int main(){
    char s[100], chara;
    int cont, i;
    scanf("%s%c", s, &chara);
    apagaCaracter(s, chara);
    cont = leLinha(s);
    for (i=0; i<cont; i++){
        printf("%c",s[i]);

    }
    printf("\n");
    return 0;
}