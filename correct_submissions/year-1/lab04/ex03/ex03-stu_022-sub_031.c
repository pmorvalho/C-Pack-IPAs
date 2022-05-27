#include <stdio.h>

#define VECMAX 100

int main(){
    int i,n , p, max = 0, v[VECMAX];

    scanf("%d", &n);
    
    for(i=0; i < n; i++){
        scanf("%d", &v[i]);
        if (v[i] > max)
            max = v[i];
    }

    for(p=0; p < max; p++){
        for(i=0;i < n; i++){
            if(v[i] >= max-p)
                printf("*");
            else    
                printf(" ");
        }
    printf("\n");
    }

    return 0;
}