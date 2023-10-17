

# include <stdio.h>

int main() {
    int N, V, divs = 1, divisor = 2;
    scanf("%d", &N);
    
    while (N != 1 || divisor < N) {
        V = N;
        if (V%divisor != 0)
            divisor++;
        else {
            divs++;
            N /= divisor;
        }
    }
    printf("%d\n", divs);
    return 0;
}