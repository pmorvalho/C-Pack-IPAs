

#define VECMAX 100
#include <stdio.h>

int main() {
    int n, i,j, v[VECMAX], max=0;

    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &v[i]);
        if (v[i]>max)
            max = v[i];
    }

    for (i=0;i<max;i++) {
        for (j=0;j<n;j++) {
            if (i < (max-v[j])) {
                printf(" ");
            }

            if (i>=(max-v[j])) {
                printf("*");
            }
        }
        printf("\n");
    }
return 0;
}