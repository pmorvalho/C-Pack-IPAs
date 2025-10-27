
#include <stdio.h>

void quadrado(int n) {
    for (int i = 1; i <= n; i++) {
        int aux = i;
        for (int j = 1; j <= n; j++) {
            if(j != n) {
                printf("%d\t", aux++);
            } else {
                printf("%d\n", aux++);
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if(n >= 2) quadrado(n);

    return 0;
}
