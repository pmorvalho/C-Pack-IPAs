
#include <stdio.h>
#define MAX 80
int tamanho(char s[]) {
    int distancia = 0;
    while (s[distancia] != '\0') {
        distancia++;
    }
    return distancia;
}
int main() {
    char s[MAX];
    scanf("%s", s);
    int distancia = tamanho(s);
    int pali = 1;
    for (int i = 0; i < distancia / 2; i++) {
        if (s[i] != s[distancia - i - 1]) {
            pali = 0;
            break;
        }
    }
    if (pali) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}