
#include <stdio.h>

void quadrado(int N){
    int inicio = 1;
    int num = N;
    for (int i = 1; i <= N; i++){
        for (int j = inicio; j <= num; j++){
            if (j != num){
                printf("%d\t", j);
            }
            else{
                printf("%d\n", j);
            }
        }
        num++;
        inicio ++;
    }

}

int main(){
    int num;
    scanf("%d", &num);
    quadrado(num);
    return 0;
}