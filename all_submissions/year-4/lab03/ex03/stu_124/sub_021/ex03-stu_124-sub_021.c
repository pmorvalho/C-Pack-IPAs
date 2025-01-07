
#include <stdio.h>

#define crz '*'
#define esp '-' 

void cruz(int N){
    int col;

    for (int i = 1 ; i <= N ; i++){
        col = 1;
        while (col <= N){
            if (col == i || col == N - (i - 1)){
                printf("%c ", crz);
            }
            else{
                printf("%c ", esp);
            }
            if (col == N){
                printf("\r\b\n");
            }

            col++;
        }
        
    }
}

int main(){
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}