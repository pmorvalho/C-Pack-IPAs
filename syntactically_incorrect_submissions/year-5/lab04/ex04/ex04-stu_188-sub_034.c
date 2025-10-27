
#include <stdio.h>

int main(){
    char palavra[100];
    scanf("%s",palavra);

    int tamanho,palindromo=1,i;
    tamanho= strlen(palavra);

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