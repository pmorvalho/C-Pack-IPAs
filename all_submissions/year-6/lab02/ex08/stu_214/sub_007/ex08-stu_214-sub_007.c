
#include<stdio.h>
int main(){
    int n;
    float k, media=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%f", &k);
        media = media + k/n;
    } printf("%.2f\n", media);
    return 0;
}