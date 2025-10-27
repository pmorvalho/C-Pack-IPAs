
#include <stdio.h>

int main(){
    int lengthe, i, j;
    scanf("%d", &lengthe);
    int vetore[lengthe];
    for (i=0; i<lengthe; i++){
        scanf("%d", &vetore[i]);
    }
    for (i=0; i<lengthe; i++){
        for (j=1; j<=vetore[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}