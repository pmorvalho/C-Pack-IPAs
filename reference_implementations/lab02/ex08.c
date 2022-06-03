#include <stdio.h>

float media (int N);

int main() {
    int N;

    scanf("%d", &N);
    printf("%.2f\n", media(N));
  
    return 0;
}

float media (int N) {
    int i;
    float sum = 0, val;

    for (i = 0; i < N; i++) {
        scanf("%f", &val);
        sum += val;
    }

    return sum/N;
}

