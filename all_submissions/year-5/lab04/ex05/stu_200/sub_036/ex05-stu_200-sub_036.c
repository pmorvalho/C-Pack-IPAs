
#include <stdio.h>
#define STRMAX 80
int leLinha(char s[]){
    char letra;
    int cont = 0;
    scanf("%c",&letra);
    while (letra != '\n' && letra != '\0' && letra != EOF){
        s[cont]= letra;
        scanf("%c",&letra);
        cont++;
    }
    return cont;
}
int main(){
    char s[STRMAX];
    leLinha(s);
    printf("%s\n",s);
    return 0;
}