
#include <stdio.h>
#include<string.h>  

#define MAX 80

int main(){
    char palavra[MAX];
    int i, tamanho;
    scanf("%s",palavra); 
    tamanho = strlen(palavra);  

    for (i=0; i < tamanho/2; i++){
        if (palavra[i] != palavra[tamanho - i - 1]){ 
            printf ("No\n");
            return 0; 
        }
    }
    printf("yes\n");
    return 0; 
}