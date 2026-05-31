

#include <stdio.h>

#define MAX 80

int leLinha(char s[]){
    int len=0;
    fgets(s, MAX, stdin);
    while (s[len]!=EOF && s[len]!='\0'){
        len++;
    }
    return len;
}

void maiusculas(char s[]){
    int i,tamanho;
    tamanho=leLinha(s);
    for (i=0;i<tamanho;i++){
        if ('a'<=s[i] && s[i]<='z') {
            s[i]=s[i]-'a'+'A';
        }
    }
}


int main(){
    
    char s[MAX];
    
    maiusculas(s);
    printf("%s",s);
    
    return 0;
    }