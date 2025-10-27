
#include <stdio.h>
#define STRMAX 80
int leLinha(char s[]){
    char letra;
    int cont = 1;
    letra = getchar();
    s[0] = letra;
    while (letra != '\n' && letra != EOF){
        letra = getchar();
        s[cont]= letra;
        cont++;
    }
    s[cont] = '\0';
    return cont;
}
int main(){
    char s[STRMAX];
    leLinha(s);
    printf("%s",s);
    return 0;
}
