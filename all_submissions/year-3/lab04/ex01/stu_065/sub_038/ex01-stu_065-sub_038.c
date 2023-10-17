
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, cont1, cont2, dig;
    scanf("%d\n", &n);
    while(n >= 100)
        scanf("%d", &n);
    
    for(cont1 = 0; cont1<n; cont1++){
        scanf("%d", &dig);
        for(cont2 = 1; cont2 <= dig; cont2++)
            printf("*");
        printf("\n");
    }
    return 0;
}