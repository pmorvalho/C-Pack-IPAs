

#include <stdio.h>

void divisivel_por_nove(char *n){
    int soma = 0;
    for(int i = 0; n[i] != '\0'; i++){
        soma += n[i] - '0';
    }
    if(soma % 9 == 0){
        printf("yes\n");
    } else{
        printf("no\n");
    }
}

int main(){
    char n[100];
    scanf("%s", n);
    divisivel_por_nove(n);
    return 0;
}