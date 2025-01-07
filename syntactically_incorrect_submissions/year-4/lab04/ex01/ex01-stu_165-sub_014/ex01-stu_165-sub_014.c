
#include <stdio.h>
#define VECMAX 100

int get_max(int n, int num[VECMAX]) {
    int i, max = 0;
    for (i = 0; i < n; i++){
        if (num[i] > max)
            max = num[i];
    }
    return max;
}

int main() {
    int n, i, j, max, num[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    max = get_max(n, num);

    for (i= 0; i < n; i++){
        for (j = 0; j < max; j++){
            printf("%s", (j < num[i]) ? "*" : " ");
        }
        putchar(' ');
        putchar('\n');
    }



}