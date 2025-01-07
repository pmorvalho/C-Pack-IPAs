

#include <stdio.h>

int main(){

    int n;
    double aux, media = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%lf", &aux);
        media += aux;
        printf("\n");
    }

    printf("%.2lf\n", media/n);

    return 0;
}