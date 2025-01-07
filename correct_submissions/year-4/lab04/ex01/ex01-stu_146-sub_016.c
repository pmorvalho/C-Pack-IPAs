

#include <stdio.h>
#define VECMAX 100

int main() {

    int n, vec[VECMAX], i;
    scanf("%d", &n); 

    for (i = 0; n-- > 0; i++) scanf("%d", &vec[i]); 
    
    for ( i = 0; vec[i] > 0; i++) { 
        while( vec[i]-- > 0) putchar('*'); 
        putchar('\n');
    }
        
    return 0;
}