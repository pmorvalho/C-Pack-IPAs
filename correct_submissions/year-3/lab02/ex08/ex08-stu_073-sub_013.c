
#include <stdio.h>

int main () {
    int con, extra;
    float sum = 0, num, media;
    scanf("%d", &con);
    extra = con;
    while (extra > 0){
        scanf("%f", &num);
        sum += num;
        extra--;
    }
    media = sum / con;
    printf("%.2f\n", media);
    return 0;
}