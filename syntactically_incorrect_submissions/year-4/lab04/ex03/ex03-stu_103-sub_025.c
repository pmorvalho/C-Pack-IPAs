
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, v[VECMAX];
    int counter = 0;
    int j = 0;
    int finish = 1;

    scanf("%d", &n);


    for(int i = 0; i < n; ++i){
        scanf("%d", &v[i]);
    }

    while(finish != 0) {
        for(int x = 0; x < n ; x++) {
            if (v[x] > j) {
                counter++; 
            }
        }

        int spaces = n - counter;
        for (int i = 0; i < spaces; i++) {
            if (spaces != n) {
                printf(" ");
            }
        }
        for (int i = 0; i < counter; i++) {
            printf("*");
        }
        j++;
        if (counter != 0) {
            printf("\n");
        }
        if (counter == 0) {
            finish = 0;
        }
        counter = 0;
    }

    return 0;
}


