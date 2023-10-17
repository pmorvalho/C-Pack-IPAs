

#include <stdio.h>

int main(void) {

    int numdigitos;
    float i, num1, acumuladormedia, media;
    
    scanf("%d", &numdigitos);
    
    acumuladormedia = 0.0;
    for(i = 1.0; i <= numdigitos; i++) {
        scanf("%f", &num1);
        acumuladormedia += num1;
        media = acumuladormedia / i;
    }
    printf("%.2f", media);
    return 0;
}