
#include <stdio.h>

void piramide(int N){
    int i, s, c;
    for (i = 1; i <= N; i++){
        s = 2*(N - i);
        for (c = 0; c < s; c++){
            printf(" ");
        }
        for (c = 1; c <= i; c++){
            if (i != 1){
                printf("%d ", c);
            }
            else{
                printf("%d", c);
            }
        }
        for (c = i - 1 ; c >= 1; c--){
            printf("%d", c);
            if (c != 1){
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    while (n < 2){
        scanf("%d", &n);
    }
    piramide(n);
    return 0;
}