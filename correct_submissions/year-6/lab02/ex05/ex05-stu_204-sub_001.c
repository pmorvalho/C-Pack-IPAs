
 #include <stdio.h>

 int main() {
    int N, contador;
    contador = 1;
    if (scanf("%d", &N)!= 1 ) return 1;
    while (contador <= N){
        printf("%d\n", contador++);
    }
    return 0;
 }