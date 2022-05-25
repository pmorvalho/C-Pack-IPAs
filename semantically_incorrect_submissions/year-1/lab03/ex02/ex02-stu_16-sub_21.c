#include <stdio.h>

void piramide(int n){
    int i = 1, j, k;
    while(i <= n){
        j = 1;
        while(j <= (2*n - 1)){
            if(j > n){
                k = n - (j - n);
            } else {
                k = j;
            }
            k = k - (n - i);
            if(k <= 0){
                printf("%c", ' ');
            } else {
                printf("%d", k);
            }

            if(j < (2*n - 1)){
                printf("%c", ' ');
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}
