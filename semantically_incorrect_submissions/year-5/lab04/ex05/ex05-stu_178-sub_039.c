
#include <stdio.h>


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
    char chara_tuah;
    chara_tuah = getchar();
    while (chara_tuah != EOF && chara_tuah != '\n'){
    printf("%c", chara_tuah);
    chara_tuah = getchar();
    }
    return 0;
}