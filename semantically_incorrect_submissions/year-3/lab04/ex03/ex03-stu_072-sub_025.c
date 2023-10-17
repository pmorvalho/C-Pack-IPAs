

#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, max, reps[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++){

        scanf("%d", &reps[i]);
        if (reps[i] > max){
            max = reps[i];
        }
    }

    for (i = 0; i < max; i++){

        for (j = 0; j < n; j++){
            if (reps[j] >= max - i){
             putchar('*');
            }
            else{
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}
