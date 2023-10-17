

#include <stdio.h>

int main(void) {

    int i, num, j;
    scanf("%d", &num);

    for(j = 0; j < num; j++) {
        for(i = 0; i < num; i++)
            printf("%d\t", j + i + 1);
        i = 0;
        printf("\n");
    } 
    return 0;
}