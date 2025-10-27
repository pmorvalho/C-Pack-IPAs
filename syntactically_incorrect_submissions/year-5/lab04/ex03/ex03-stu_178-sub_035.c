
#include <stdio.h>

int main(){
    int lengthe, i, j, max;
    scanf("%d", &lengthe);
    max = 0;
    int vetore[lengthe];
    for (i = 0; i < lengthe; i++){
        scanf("%d", &vetore[i]);
        if (vetore[i] > max){
            max = vetore[i];
        }
    }
    for(j = max; j>=1; j--){
        for (i=0; i<lengthe; i++){
            if (vetore[i] >= j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}