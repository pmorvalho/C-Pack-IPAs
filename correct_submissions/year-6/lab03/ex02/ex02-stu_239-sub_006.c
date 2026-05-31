

#include <stdio.h>


void piramide(int N){

    int i, j;

    for (i = -N; i < 0; i++){

        for (j = 2; j <= N; j++){

            if (i + j > 0)
                printf("%d ", i + j);

            else
                printf("  ");
        }

        for (j = j; j > 2; j--){

            if (i + j > 1)
                printf("%d ", i + j);

            else
                break;
        }

        if (i + j > 0)
            printf("%d", i + j);

        printf("\n");

    }
}

int main(){
    int N;

    scanf("%d", &N);

    piramide(N);

    return 0;
}
