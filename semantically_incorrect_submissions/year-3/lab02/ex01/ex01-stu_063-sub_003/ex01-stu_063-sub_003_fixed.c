

#include <stdio.h>

int main(){
    int i, n, maior = 0;
    for (i = 0; i < 3; i++){
        scanf("%d", &n);
        if (n > maior)
            maior = n;
    }
    printf("%d\n", maior);
    return 0;
}
