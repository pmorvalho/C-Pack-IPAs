
#include <stdio.h>
#define VECMAX 100

int main(){
    int vec[VECMAX], n, i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &vec[i]);
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < vec[i]; j++) {
            printf("%c", (j < vec[i]) ? '*' : ' ');
        }
        printf("\n");
    }
        
    return 0;
}
