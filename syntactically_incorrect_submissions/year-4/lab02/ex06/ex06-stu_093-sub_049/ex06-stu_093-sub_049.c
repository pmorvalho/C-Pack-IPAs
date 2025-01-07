
#include <stdio.h>

int main() {
    
    int n, i;
    double aux;

    scanf("%d", &n);
    scanf("%le", &aux);
    double min_val = aux, max_val = aux;
    
    for(i = 1; i < n; i++) {
        scanf("%le", &aux);
        if(aux < min_val) min_val = aux;
        if(aux > max_val) max_val = aux;
    }

    printf("min: %f, max: %f\n", min_val, max_val);

    return 0;
}