

#include <stdio.h>
#define VECMAX 100

int main(){
    int n, p, i, vec[VECMAX];
    scanf ("%d",&n);
    if (n < VECMAX){
        for(i=0; i < n; i++){   
            scanf("%d", &vec[i]);
        }
        for (i=0; i <n; i++){           
            for (p=0 ; p < vec[i]; p++){
                putchar('*');
            }
            putchar('\n');
        }
    }
    return 0;
}
