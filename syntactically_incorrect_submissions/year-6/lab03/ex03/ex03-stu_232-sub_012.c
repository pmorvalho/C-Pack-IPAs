

#include <stdio.h>


void cruz(int N){
    int place = 0;
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if ((j==N-place-1)||(j==place)){
                if (j!=N-1){
                    printf("* ");
                }
                else{
                    printf("*");
                }
            }
            else{
                if (j!=N-1){
                    printf("- ");
                }
                else{
                    printf("-");
                }
            }
        }
        printf("\n");
        place += 1;
    }
}

int main(){
    int num;
    scanf("%d", &num);
    cruz(num);
    return 0;
}