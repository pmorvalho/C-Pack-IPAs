#include <stdio.h>

int main() {

    int N, inverso, inversoagain;

    while (scanf("%d", &N) == 1) {
        if (N == 0) {
            inversoagain = 0;
        } else {
            inverso = 0;

            while (N != 0) {
                inverso = inverso * 10 + (N % 10);
                N /= 10;
            }
            inversoagain = 0;

            while (inverso != 0) {
                inversoagain = inversoagain * 10 + (inverso % 10);
                inverso /= 10;
            }
        }
        printf("%d ", inversoagain);
    }

    return 0;
}
