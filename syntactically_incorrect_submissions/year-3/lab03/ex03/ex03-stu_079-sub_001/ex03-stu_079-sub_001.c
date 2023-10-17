
# include <stdio.h>

void cruz(int n);

int main(int n){
    cruz(n);
    return 0;
}

void cruz(int n){
    int l,c;
    for(l = 0, l < n, l++){
        for(c = 0, c < n, c++){
            if(c){
                putchar(' ');
            putchar((l == c) || (l + c == n-1) ? 'x':'-');
            }
        putchar('\n');
        }
    }
}
