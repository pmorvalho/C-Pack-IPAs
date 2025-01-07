
#include <stdio.h>
int num, i = 0;

int main () {
    scanf("%d", &num);

    while (i != num) {
        i++;
        printf("%d\n", i);
    }

    return 0;
}