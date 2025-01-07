
#include <stdio.h>
#define VECMAX 100

int main(){
    int i, n, vec[VECMAX];

    scanf("%d",&n);

    for (i = 0; i < n && n < VECMAX; i++){
        scanf("%d",&vec[i]);
    }

    for (i = 0; i < n; i++){
        while (vec[i] > 0){
            printf("%c",'*');
            vec[i]--;
        }
        printf("\n");
    }

    return 0;
}