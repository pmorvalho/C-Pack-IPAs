

#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, reps[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &reps[i]);
    }

    for (i = 0; i < n; i++){

        for (j = 0; j < reps[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}