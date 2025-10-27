
#include <stdio.h>
int main(){
    int i, soma = 0;
    char str[101];
    scanf("%100s", str);
    for (i = 0; str[i] != '\0'; i++){
        soma += str[i] - '0';
    }
    if (soma % 9 == 0){
        printf("yes\n");
    } else {
        printf("no\n");
    }
}