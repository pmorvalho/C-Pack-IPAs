

#include <stdio.h>

int main(){

    int i, maior, num;

    scanf("%d", &maior);

    for (i = 0; i < 3; i++){

        scanf("%d", &num);

        if (num > maior)
            maior = num;
    }

    printf("%d\n", num);

    return 0;
}
