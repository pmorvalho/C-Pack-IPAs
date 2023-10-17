

#include <stdio.h>

void cruz(int);

int main(){
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}

void cruz(int n){
    int i, j;
    for (i = 0; n > i; i++){
        for (j = 0; n > j; j++){
            if (j)
                putchar(' ');
            if (j == i)
                putchar('*');
            else if ( i + j + 1 == n)
                putchar('*');
            else
                putchar('-');
        }
        putchar('\n');
    }
}