

#include <stdio.h>

void media(int n) {
    float soma = 0.0;
    float c;
    float final;
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &c);
        soma = soma + c;
    }
    
    final = soma / n;
    printf("%.2f\n", final);
}

int main() {
    int n;
    scanf("%d",&n);
    media(n);
    return 0;
}
