
# include <stdio.h>
# define VECMAX 100
int main(){
    int n, m = -1, v[VECMAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
        m = m < v[i] ? v[i] : m;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            putchar(v[j] -- > 0 ? '*':' ');
        putchar('\n');
    }
    return 0;
}
