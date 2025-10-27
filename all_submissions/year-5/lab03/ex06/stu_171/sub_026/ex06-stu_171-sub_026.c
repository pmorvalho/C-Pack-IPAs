
#include <stdio.h>

void divisivel(char N[]) {
    int soma = 0;
    int i = 0;

    while (N[i] != '\0') {  
        soma += N[i] - '0'; 
        i++;
    }

    if (soma % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}

int main() {
    char N[1001]; 
    scanf("%1000s", N); 
    divisivel(N);
    return 0;
}
