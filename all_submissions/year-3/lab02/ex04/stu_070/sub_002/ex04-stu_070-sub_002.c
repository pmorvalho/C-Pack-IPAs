
#include <stdio.h>

int main() 
{
    int menor, meio, maior, a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (b > a) {
        if (a > c){
            maior = b;
            meio = a;
            menor = c;
        }
        else if (b > c) {
            maior = b;
            meio = c;
            menor = a;
        }
        else {
            maior = c;
            meio = b;
            menor = a;    
        }
    }
    else if (b > c) {
        maior = a;
        meio = b;
        menor = c;
    }
    else if (c > a) {
        maior = c;
        meio = a;
        menor = b;
    }
    else {
        maior = a;
        meio = c;
        menor = b;    
    }
    
    printf("%d %d %d\n", menor, meio, maior);
    return 0;
}