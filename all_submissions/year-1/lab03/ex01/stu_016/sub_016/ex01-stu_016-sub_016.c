#include <stdio.h>

void quadrado(int n){
    int i = 1, j, k;
    while(i <= n){
        j = i;
        k = 1;
        while(k <= n){
            if(k<n){
                printf("%d\t", j);
            } else {
                printf("%d\n", j);
            }
            j++;
            k++;
        }
        i++;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
