
#include <stdio.h>

int main() {
    int n, aux;
    float count = 0, temp, average = 0;
    scanf("%d", &n);
    aux = n;
    while(n != 0){
        scanf("%f", &temp);
        count += temp;
        n--;
    }
    average = count / aux;
    printf("%.2f\n", average);
    return 0;
}