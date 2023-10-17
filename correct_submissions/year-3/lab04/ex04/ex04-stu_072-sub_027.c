
#include <stdio.h>

#define MAX 80

int main(){
    char str[MAX];
    int i, tamanho = 0;

    if (scanf("%s", str) != 1 || str[0] == '\0'){
        
        printf("yes\n");
        return 0;
    }

    while (str[tamanho] != '\0'){
        tamanho++;
    }
    
    for (i = 0; i < tamanho / 2; i++){

        if (str[i] != str[tamanho - 1 - i]){
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}