

 #include <stdio.h>

 int main () {
    float maior = 0, menor = 0, valor; 
    int n, i = 1;
    
    scanf("%d", &n);

    while ( i <= n ) {
        scanf("%f", &valor);
        if (i == 1) {
            maior = valor;
            menor = valor;
        }
            

        if (valor >= maior)
            maior = valor;

        if (valor <= menor)
            menor = valor;
        i++;
    }
    printf("min: %f, max: %f\n", menor, maior);
    return 0;

 }