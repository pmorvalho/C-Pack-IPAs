#include <stdio.h>

void cruz(int n);

int main() {
    int n;

    scanf("%d", &n);
    cruz(n);

    return 0;
}


void cruz(int n) {
    int l, c;
    for(l = 0; l < n; l++) {
        for (c = 0; c < n; c++){
            if (c == l){
                printf("* ");
            }
            else if (c == n-l-1){
                printf("* ");
            }
            else {
                printf("- ");
            } 
        }
        putchar('\n');
    }
}