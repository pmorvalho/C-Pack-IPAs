
#include <stdio.h>

int main(){
    char palavra[80];
    int tamanho=0,palindromo=1,i;
    
    scanf("%s",palavra);
    
    while (palavra[tamanho]!='\0'){ 
        tamanho++;
    }

    for (i=0;i<tamanho/2;i++){
        if (palavra[i]!=palavra[tamanho-i-1]){ 
            palindromo=0;
            break;
        }
    }
    if (palindromo==1){
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}   