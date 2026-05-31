

#include <stdio.h>

int main () {

    int primeiro, segundo, terceiro, temp;

    scanf("%d%d%d", &primeiro, &segundo, &terceiro);

    if (primeiro > segundo) {
        temp = segundo;
        segundo = primeiro;
        primeiro = temp;
    }

    if (primeiro > terceiro) {
        temp = terceiro;
        terceiro = primeiro;
        primeiro = temp;
    }

    if (segundo > terceiro) {
        temp = terceiro;
        terceiro = segundo;
        segundo = temp;
    }

    printf("%d %d %d\n", primeiro, segundo, terceiro);
    return 0;
}