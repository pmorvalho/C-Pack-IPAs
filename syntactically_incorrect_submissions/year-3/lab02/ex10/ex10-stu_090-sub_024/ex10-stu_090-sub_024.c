

#include <stdio.h>

int main(void) {

<<<<<<< HEAD
    int num, acumuladornumdig, acumuladordig, soma;
    scanf("%d", &num);
    acumuladordig = num % 10;
    soma = 0;
    for (acumuladornumdig = 0; num != 0; acumuladornumdig++){
        num = num / 10;
        soma += acumuladordig;
        acumuladordig = num % 10;
    }
    
    printf("%d\n%d\n", acumuladornumdig, soma);
    return 0;
}
=======
    int num, acumuladornumdig, acumuladordig, soma;
    scanf("%d", &num);
    acumuladordig = num % 10;
    soma = 0;
    for (acumuladornumdig = 0; num != 0; acumuladornumdig++){
        num = num / 10;
        soma += acumuladordig;
        acumuladordig = num % 10;
    }
    
    printf("%d\n%d\n", acumuladornumdig, soma);
    return 0;
}
>>>>>>> 7773d55 (nao sei)
