
#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, v[VECMAX], max;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        if(i==0||v[i] > max)
            max = v[i];
    }
    
    for(i=max; i>=1; i--){
        for(j = 0; j<n; j++){
            if(v[j] >= i)
                putchar ('*');
            else
                putchar(' ');
        }
        putchar('\n'); 
    }
    return 0;
}