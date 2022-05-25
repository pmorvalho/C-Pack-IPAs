#include <stdio.h>

void cruz(int n){
    int i = 1, j;
    while(i <= n){
        j = 1;
        while(j <= n){
            if(i == j || i == (n - j + 1)){
                printf("%c", '*');
            } else {
                printf("%c", '-');
            }
            if(j < n) printf("%c", ' ');
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}
