

#include <stdio.h>
#define MAX 100

int main(){
    int i, soma=0;
    char numero[MAX];
    scanf("%s", numero);

    for (i=0; numero[i] != '\0'; i++){
        soma+=numero[i] - '0';
    }

    if (soma % 9 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}