#include <stdio.h>


int main()
{
    int n, i;
    float r, media;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%f", &r);
        media = media + r;
    }
    printf("%.2f\n", media/n);
    return 0;

}