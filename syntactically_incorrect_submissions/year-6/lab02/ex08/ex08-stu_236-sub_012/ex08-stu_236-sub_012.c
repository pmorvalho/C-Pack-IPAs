
# include <stdio.h>

int main(){
    int N, soma, num;
    float media;
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        soma += num; 
    }
    media = soma / N;
    printf("%.2f\n", media);
    return 0;
}