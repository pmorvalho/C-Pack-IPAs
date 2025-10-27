
#include <stdio.h>
#define DIM 100

int tamanho(char s[]){
    int tamanho=0, i;

    for (i=0; s[i]!='\0';++i){
        ++ tamanho;
    }

    return tamanho;

}

void apagaCaracter(char s[], char c){
    int i = 0, size = tamanho(s), j;

    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
        i++;
    }

    s[j] = '\0';

    

    printf("%s\n",s);
}

int main(){
    char s[DIM], c;
    int i =0, letra;

    letra=getchar();
    while (letra!= EOF && letra!='\n' &&i<DIM-1){
        s[i++]=letra;
        letra=getchar();
    }
    s[i]='\0';

    scanf("%c",&c);
    apagaCaracter(s,c);

    return 0;
}