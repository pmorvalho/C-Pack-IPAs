
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

void maiusculas(char s[]){
    int cont = 0;
    char letra;
    letra = s[cont];
    while (letra != '\n'){
        if (letra >= 'a' && letra <= 'z')
            s[cont] = letra-32;
        ++cont;
        letra = s[cont];
    }
}

int main(){
    char s[STRMAX];
    leLinha(s);
    maiusculas(s);
    printf("%s\n",s);
    return 0;
}
//to be sure