
#include <stdio.h>
#define MAX 100

void leLinha(char s[]){
    int c, i;
    c = getchar();

    for (i = 0; c != '\n' && c != EOF; i++){
        s[i] = c;
        c = getchar();

    }
    s[i] = '\0';
    printf("%s\n", s);
}

int main(){
    char linha[MAX];
    leLinha(linha);
    return 0;


}