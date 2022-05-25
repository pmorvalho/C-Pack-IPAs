#include <stdio.h>
#include <string.h>
#define MAX 80

void apagaCaracter(char frase[], char letra){
    int i=0,j=0;
    
    for(i=0;frase[i]!='\0';i++){
        if (frase[i]!=letra){
            frase[j]=frase[i];
            j++;
        }
    }        
}

int main(){
    
    char frase[MAX], letra;
    
    fgets(frase, MAX, stdin);
    
    scanf("%c",&letra);
    
    apagaCaracter(frase,letra);

    printf("%s", frase);

return 0;
}
