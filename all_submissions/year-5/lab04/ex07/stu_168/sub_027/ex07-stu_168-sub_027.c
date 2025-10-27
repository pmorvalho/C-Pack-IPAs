
#include <stdio.h>
#define DIM 100

int leLinha(char s[]){
    int c,i;
    for(i=0;i<DIM-1 && (c=getchar())!= EOF && c!='\n';i++)
        s[i]=c;
    s[i]='\0';
    return i;
}

void apagaCaracter(char s[], char c){
    int i,j;
    for(i=0,j=0;s[i]!='\0';i++){
        if(s[i]!=c)
            s[j++]=s[i];
    }
    s[j]='\0';
}

int main(){
    char linha[DIM],c;
    leLinha(linha);
    scanf("%c",&c);
    apagaCaracter(linha,c);
    printf("%s\n",linha);
    return 0;
}