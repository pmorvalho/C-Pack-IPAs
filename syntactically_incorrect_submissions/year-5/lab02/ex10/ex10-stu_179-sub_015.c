
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int n_dig = 0, soma_dig = 0, ultimo_dig;

    while (n > 0){
        ultimo_dig = n % 10;
        soma_dig += ultimo_dig;   

        n_dig ++;
        n = n / 10;
    }

    printf("%d\n%d\n", n_dig, soma_dig);
    return 0;
}