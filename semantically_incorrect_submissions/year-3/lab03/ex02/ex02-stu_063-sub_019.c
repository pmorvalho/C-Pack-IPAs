

#include <stdio.h>

void piramide(int);

int main(){
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}

void piramide(int n){
    int c,l;
    for (l = 1; l <= n; l++){
        for (c = 1; c <= n+l-1; c++){
            if (n >= c && c > n-l)
                printf("%d", c+l-5);
            else if (c > n)
                printf("%d", l-c+5);
            else
                putchar(' ');
        }
        putchar('\n');
    }
}