
#include<stdio.h>
#include <string.h>
#define MAX 80

void maiusculas (char s[]){
    int i, tamanho = strlen(s);
    for (i=0; i< tamanho; i++)
    
        if (s[i]>= 'a' && s[i]<='z') 
            s[i]= s[i] - 'a' + 'A';
}

int main(){
    char linha[MAX];
    
    fgets (linha, MAX, stdin); 
    maiusculas (linha); 
    printf("%s\n", linha);
    return 0;
}