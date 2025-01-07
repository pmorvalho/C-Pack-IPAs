

#include <stdio.h>

int main() {

    int n[3];
    
    scanf("%d %d %d", &n[0], &n[1], &n[2]);

    int id_min, temp, i, j;
    for (i = 0; i < 3; i++) {
        id_min = i;
        for (j = i; j < 3; j++) {
            if (n[id_min] > n[j]) {
                id_min = j;
            }
        }
        temp = n[i];
        n[i] = n[id_min];
        n[id_min] = temp;
    }

    for (int i = 0; i < 2; i++) {
        printf("%d ", n[i]);
    }
    printf("%d\n", n[2]);

    return 0;
}