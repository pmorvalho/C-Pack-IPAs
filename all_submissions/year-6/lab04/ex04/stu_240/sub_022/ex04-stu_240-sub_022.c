
#include <stdio.h>
#include <string.h>
#define MAX 80
#define SIM 1
#define NAO 0


int tamanho(char v[]){
    int len = 0, i;

    for (i = 0; v[i] != '\0'; i++){
        len++;
    }

    return len;
}

int main(){
    int i, len, estado = SIM;
    char palavra[MAX];
    scanf("%s", palavra);

    len = strlen(palavra);

    for (i = 0; i < len/2; i++){
        if (palavra[i] != palavra[len - i - 1]){
            estado = NAO;
            printf("no\n");
            break;
        }
    }
    if (estado == SIM){
        printf("yes\n");
    }

    return 0;
}