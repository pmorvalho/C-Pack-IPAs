
#include <stdio.h>
#define VECMAX 100

int main(void) {
    int i, j, vec[VECMAX],n;
    if(scanf("%d",&n) != 1 || n <= 0 || n >= VECMAX){
        return 2;
    }

    for (i = 0; i < n ; i++){
        if(scanf("%d", &vec[i]) != 1){ 
            return 2;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j<vec[i]; j++){ 
            putchar('*');
        }
        putchar('\n'); 
    }
    return 0;
}