

#include <stdio.h>

int main() {

    int value, num = 0, soma = 0, var, dig;

    scanf("%d", &value);
    var = value;

    if (value < 10)
        printf("1\n%d\n", value);
    else
        while (var > 10) {
            dig = var % 10;
            soma += dig;
            num++;
            var = var / 10;
    }

    printf("%d\n%d\n", num + 1, soma + var);

    return 0;
}