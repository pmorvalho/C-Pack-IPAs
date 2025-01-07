
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VEC_MAX 100

int main() {

    int vec_size = 0;
    int vec[VEC_MAX];
    int i, j = 0;

    scanf("%d", &vec_size);
    if (vec_size > VEC_MAX || vec_size < 1) {
        printf("Invalid vector size\n");
        return 1;
    }

    for (i = 0; i < vec_size; i++) {
        scanf("%d", &vec[i]);
    }

    for (i = 0; i < vec_size; i++) {
        for (j = 0; j < vec[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}