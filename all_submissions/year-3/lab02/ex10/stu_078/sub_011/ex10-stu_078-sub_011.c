
 #include <stdio.h>

 int main() {
    int N, soma = 0, contador = 0;
    scanf("%d", &N);
    while (N > 0) {
      soma += N % 10;
      N /= 10;
      contador += 1;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
 }