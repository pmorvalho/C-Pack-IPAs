
#include <stdio.h>
int main() {
    int N;  

    double maior, menor, num;

    scanf("%d\n", &N);

    
    scanf("%lf", &num);
    maior = menor = num ;

    for(int i = 1; i < N; i++) {
        scanf("%lf", &num);

        if(num > maior) maior = num;
        if(num < menor) menor = num;
    }

    printf("min: %f, max: %f\n", menor, maior);
    return 0;
}


// ou devia ser utilizado um contador para saber quantos numeros foram dados