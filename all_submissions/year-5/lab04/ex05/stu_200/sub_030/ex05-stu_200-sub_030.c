
#include <stdio.h>
#define STRMAX 80
int leLinha(char s[]){
    char letra;
    int cont = 1;
    scanf("%c",&letra);
    s[0] = letra;
    while (letra != '\n' && letra != EOF && cont<STRMAX-1){
        scanf("%c",&letra);
        s[cont]= letra;
        cont++;
    }
    return cont+1;
}
int main(){
    char s[STRMAX];
    leLinha(s);
    printf("%s",s);
    return 0;
}