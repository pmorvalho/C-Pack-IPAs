
#include <stdio.h>
#define VECMAX 100
int max(int vec[], int n);

int max(int vec[], int n) {
    int i;
    int mx = vec[0];
    for (i=1;i<n; i++) {
        if (mx < vec[i]) {
            mx = vec[i];
        }
    }
    return mx;
}

int main() {
    int i,n,j;
    int vec[VECMAX];
    scanf("%d", &n);
    for (i=0;i<n;i++) scanf("%d", &vec[i]);
    int mx = max(vec, n);
    for (i=1;i<=mx; i++) {
        for (j=0;j<n;j++) putchar(vec[j]>=i ?'*':' ');
        putchar('\n');
    }
    return 0;
}