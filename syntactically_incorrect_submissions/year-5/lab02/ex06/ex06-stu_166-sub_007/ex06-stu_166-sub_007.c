    
    #include <stdio.h>
    int main() {
        int n;
        float min, max, numero;
        scanf("%f",&numero);
        n = numero;
        min = max = numero;
        while (n != 0) {
            scanf("%f",&numero);
            if (numero > max)
            max = numero;
            if (numero < min)
            min = numero;
            n--;
        }
        printf("min: %.6f, max: %.6f\n", min, max);
        return 0;
    }
//por resolver