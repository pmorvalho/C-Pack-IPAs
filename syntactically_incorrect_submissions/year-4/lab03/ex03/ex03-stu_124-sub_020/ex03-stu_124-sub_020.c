
#include <stdio.h>

#define crz '*'
#define esp '-' 

void cruz(int N){
    int col;

    for (int i = 1 ; i <= N ; i++){
        col = 1;
        while (col <= N){
            if (col == i || col == N - (i - 1)){
                if (col == N){
                    printf("%c\n", crz);
                }
                else{
                    printf("%c ", crz);
                }
            }
            else{

                if (col == N){
                    printf("%c\n", esp);
                }
                else{
                    printf("%c ", esp);
                }
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