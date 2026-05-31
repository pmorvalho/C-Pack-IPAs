
#include <stdio.h>
#include <string.h>
#define MAX 80

void maiusculas(char s[]){
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] += 'A'-'a'; 
        }
    }
}

int main(){
    char linha[MAX];
    fgets(linha, MAX, stdin);
    
    maiusculas(linha);
    printf("%s", linha);
    
    return 0;
}