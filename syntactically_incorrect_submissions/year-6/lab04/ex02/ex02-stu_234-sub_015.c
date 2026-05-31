


#include <stdio.h>
#define VECMAX 100

int maxVector (int v[], int n) {
    int max = v[0], i;
    for(i=1; i < n; i++)
        if (v[i] > max)
            max = v[i];
    return max; 
}


int main() {
    int n, i, j, v[VECMAX], maior;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    maior = maxVector(v,n);
    for (i=0;i<maior;i++) {
        for(j==0;j<n;j++) {
            if(v[j]>i)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}