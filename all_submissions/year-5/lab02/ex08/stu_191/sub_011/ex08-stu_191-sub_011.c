
#include <stdio.h>

int main(){
    int n, contador;
    float input, media=0;

    scanf("%d", &n);
    for (contador=0; contador<n; ++contador){
        scanf("%f", &input);
        media += input;
    }

    media/=n;
    printf("%.2f\n", media);
    return 0;
}