
#include <stdio.h>

#define VECMAX 100

int main(){
    int n,max = 0,i,j;

    scanf("%d", &n);

    while(n >= VECMAX){
        scanf("%d", &n);
    }
    int vec[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        if(max <= vec[i])
            max = vec[i];
    }

    for(i = max - 1; i >= 0; i--){
        for(j = 0; j < n; j++){
            if(vec[j] > i){
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