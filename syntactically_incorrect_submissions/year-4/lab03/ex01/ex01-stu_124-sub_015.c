
#include <stdio.h>

int main(){
    int N, col, lin;
    scanf("%d", &N);
    lin = N;
    for (int i = 1 ; i <= N; i++){
        col = i;
        while (col <= lin){
            printf("%d\t", col);
            ++col; 
        }
        ++lin;
        printf("\n");
    }
    return 0;
}