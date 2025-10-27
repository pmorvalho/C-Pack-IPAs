
#include <stdio.h>

void cruz(int N){
    int i, f;
    for (i = 0; i < N; i++){
        for (f = 0; f < N; f++){
            if (f != N-1){
                if (i == f || f == N-i-1){
                    printf("* ");
                }
                else{
                    printf("- ");
                }
            }
            else{
                if (i == f || f == N-i-1){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}