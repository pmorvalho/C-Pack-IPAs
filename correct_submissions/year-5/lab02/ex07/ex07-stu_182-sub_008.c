
#include <stdio.h>

int main(){
    int N, i, divisores = 0;

    scanf("%d", &N);

    for(i = N; i > 0; i--){
        if ((N % i) == 0)
            divisores++;
    }

    printf("%d\n", divisores);
    return 0;
}
