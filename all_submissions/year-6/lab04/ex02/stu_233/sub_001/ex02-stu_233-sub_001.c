


# include <stdio.h>
# define VECMAX 100
int max(int vec[], int n) {
    int i = 1;
    int mx = vec[0];
    while (i < n) {
        if(vec[i] > mx) mx = vec[i];
        i++;
    }
    return mx;
}

int main() {
    int i, n, j;
    int vec[VECMAX];
    int mx;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &vec[i]);
    mx = max(vec, n);
    for (i = 0; i <= mx; i++) {
        for (j = 0; j < n; j++) putchar(vec[j] >= i? '*': ' ');
        putchar('\n');
    }
    return 0;
}