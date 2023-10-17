

#include <stdio.h>

int main()
{
    int N = 0;
    int i = 0;
    float aux = 0, media = 0;

    scanf("%d", &N);

    while(i < N){

        scanf("%f", &aux);
        media += aux;
        i ++;
    }
    media /= N;

   printf("%.2f", media);
}
