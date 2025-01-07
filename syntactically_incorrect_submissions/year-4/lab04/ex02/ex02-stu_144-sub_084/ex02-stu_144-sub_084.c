
#include <stdio.h>

#define VECMAX 100

int main(){
    int n = 0, vec[VECMAX] = {0}, i, j, max = 0;

    if(n <= 0 || n >= VECMAX){
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        max = ((vec[i] > max) ? vec[i] : max);
    }
    for(i = 0; i < max; i++){
        for(j = 0; j < n; j++){
            putchar( (vec[j] > i) ? '*' : ' ');
        }
        purchar('\n');

    }
    
    return 0;
}

