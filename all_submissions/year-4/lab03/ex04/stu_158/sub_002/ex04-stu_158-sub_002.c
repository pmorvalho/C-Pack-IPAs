
#include <stdio.h>

int main() {
    int counter;

    for (counter = 0; getchar() != EOF; counter++);
    printf("%d\n", counter);

    return 0;
}