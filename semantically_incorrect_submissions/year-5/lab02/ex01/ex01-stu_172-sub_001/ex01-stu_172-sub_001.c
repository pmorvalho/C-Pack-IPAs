
#include <stdio.h>

int main() {
    int num_maior = '0',c;

    while((c=getchar()) != EOF){
            if (c > num_maior)
                num_maior = c;
    }
    putchar(num_maior);
    return 0;
}
    



