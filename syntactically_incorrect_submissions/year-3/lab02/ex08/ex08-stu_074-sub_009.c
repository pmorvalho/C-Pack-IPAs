
# include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    float res = 0, num;
    for (i = 0; i < N; i++) {
        scanf("%f", &num);
        res += num;
    }

    res /= (float)N;
    printf("%.2f", res);
    
    return 0;
}