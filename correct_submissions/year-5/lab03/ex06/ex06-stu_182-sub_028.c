
#include <stdio.h>

#define DIM 100

int main(){
    char s[DIM];
    int i, soma = 0;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++){
        soma += (s[i] - '0');
    }

    if((soma % 9) == 0){
        printf("yes\n");
    }

    else{
        printf("no\n");
    }
    
    return 0;
}