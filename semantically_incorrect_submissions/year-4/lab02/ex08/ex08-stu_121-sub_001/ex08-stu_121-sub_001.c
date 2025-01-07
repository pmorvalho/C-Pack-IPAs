
#include <stdio.h>
int main()
{
    int i,N;
    float num,media;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%f",&num);
        media += num;
        }
    media /= N;
    return printf("%.2f", media) == EOF;
    }