
# include <stdio.h>
# define VECMAX 100

int main(){
    int n, v[VECMAX], max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
        max = max < v[i] ? v[i] : max;
    }
    for (int i = 0; i < max; i++){
        for (int j = 0; j < n; j++)
            putchar(v[j]-- > 0 ? '*': ' ');
        putchar('\n');
    }
    return 0;
}