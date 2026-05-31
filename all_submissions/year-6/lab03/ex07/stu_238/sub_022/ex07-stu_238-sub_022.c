#include <stdio.h>

int main() {
    int total = 0, num_atual = 0;
    char c;
    int sinal = 1; 

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= '0' && c <= '9') {
            num_atual = num_atual * 10 + (c - '0');
        } 
        else if (c == '+' || c == '-') {
            total += sinal * num_atual;
            num_atual = 0; 
            sinal = (c == '+') ? 1 : -1;
        }
    }

    total += sinal * num_atual;

    printf("%d\n", total);
    return 0;
}