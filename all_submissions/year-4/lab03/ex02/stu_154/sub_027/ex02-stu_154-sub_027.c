
#include <stdio.h>
void piramide(int N) {
   for(int i = 0; i < N; i++) {
    char x = ' ';
    for(int j = 0; j < N - i - 1; j++){
        printf("%c", x);
    }
    for(int j = 1; j <= 2*i + 1; j++) {
        if (j <= i + 1) {
            printf("%c%d", x, j);
        } else {
            printf("%c", x);
        }
    }
    for (int j = i; j > 0; j--) {
        printf("%d%c", j, x);
    }
    printf("\n");

   }
}
int main() {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}
