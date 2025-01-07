
#include <stdio.h>
#define VECMAX 100

int main(){
    int nao_vazio = 1, i, n, vec[VECMAX] = {0};
    char frase[VECMAX];

    scanf("%d",&n);

    for (i = 0; i < n && n < VECMAX; i++){
        scanf("%d",&vec[i]);
    }
    while (nao_vazio == 1){
        nao_vazio = 0;

        for (i = 0; i < n && n < VECMAX; i++){
            if (vec[i] > 0){
                nao_vazio = 1;
                frase[i] = '*';
                vec[i]--;
            }
            else{
                frase[i] = ' ';
            }
        }

        if (nao_vazio == 1){
            frase[i] = '\n';
            frase[i + 1] = '\0';
            printf("%s",frase);

        }
    }

    return 0;
}