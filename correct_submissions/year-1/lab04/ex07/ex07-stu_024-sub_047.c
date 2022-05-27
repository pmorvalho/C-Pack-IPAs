#include <stdio.h>
#include <string.h>
#define MAX 80

void apagaCaracter(char frase[], char letra){
    int i=0,j=0;
    
    while(frase[j]){
        
        if (frase[j]!=letra){       

        frase[i]=frase[j];
        i++;
        }
        j++;    
    }

    frase[i]='\0';
}

int main(){
    
    char frase[MAX], letra;
    
    fgets(frase, MAX, stdin);
    
    scanf("%c",&letra);
    
    apagaCaracter(frase,letra);

    printf("%s", frase);

return 0;
}
