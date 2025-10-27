

#include <stdio.h>

void piramide(int N) {
    int n2, starter = 1, starter2 = 1, starter3 = 0, counter = 1;
    n2 = 2 * N;
    if (N >= 2) {
       for (;N > 0; N--) {
            for (;n2 > 2; n2--) {
                printf(" ");
            }
            for (;starter > 0; starter--) {
                printf("%d ", starter2);
                starter2++;
            }
            starter2 = starter2 - 2;
            for (;(starter3 > 0) & (starter2 > 0); starter3--) {
                if (starter3 == 1 ) 
                    printf("%d", starter2);
                else
                    printf("%d ", starter2);
                starter2--;
            }
        putchar('\n');
        starter2 = 1;
        counter++;
        starter3 = counter;
        starter = counter;
        n2 = 2*(N - 1);
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}
