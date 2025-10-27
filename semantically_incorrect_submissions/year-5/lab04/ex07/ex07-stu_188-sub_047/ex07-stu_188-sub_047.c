
#include <stdio.h>

void apagaCaracter(char s[], char c){
    int i=0, novapalavra=0;
    while (s[i]!='\0'){
        if (s[i]!=c){
            s[novapalavra]=s[i];
            novapalavra++;
        }
        i++;
    }
    s[novapalavra]='\0'; 
    
}

int main(){
    char s[80],c;
    scanf("%s %c",s,&c);
    apagaCaracter(s,c);
    printf("%s\n",s);
    return 0;
}