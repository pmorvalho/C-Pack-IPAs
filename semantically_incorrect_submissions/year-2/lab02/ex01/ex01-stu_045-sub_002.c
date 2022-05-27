#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("? ");
    scanf("%d", &a);
    printf("? ");
    scanf("%d", &b);
    printf("? ");
    scanf("%d", &c);
    if(a < 1 || b < 1 || c < 1){
        printf("As dimensões dos lados do triângulo devem ser todas positivas");
    }
    else{
        if(a + b <= c || a + c <= b || c + b <= a){
            printf("Não é triângulo");
        }
        else{
            if(a == b && b == c){
                printf("O triângulo é equilátero");
            }
            else{
                if(a == b || b == c || c == a){
                    printf("O triângulo é isósceles");
                }
                else{
                    printf("O triângulo é escaleno");
                }
            }
        }
    }
    return 0;
}
