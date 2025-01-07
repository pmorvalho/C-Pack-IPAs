
#include <stdio.h>

int main(){
    int q, num, contador = 0, media = 0;

    scanf("%d", &q);
    for(contador; contador < q; contador++){
        scanf("%d", &num);
        media += num;
    }
    media /= q;
    printf("%d", media);
    return 0;
}