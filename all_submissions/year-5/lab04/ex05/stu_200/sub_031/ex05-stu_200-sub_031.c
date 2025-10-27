
#include <stdio.h>
#define STRMAX 80
int leLinha(char s[]){
    char letra;
    int cont = 0;
    letra = getchar();
    while (letra != '\n' && letra != EOF){
        s[cont]= letra;
        letra = getchar();
        cont++;
    }
    s[cont] = '\0';
    return cont;
}
int main(){
    char s[STRMAX];
    leLinha(s);
    printf("%s\n",s);
    return 0;
}
