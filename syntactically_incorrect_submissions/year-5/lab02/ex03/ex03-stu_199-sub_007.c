

#include <stdio.h>


int main() {

    int a, b, resto = a % b;
    scanf ("%d %d", &a, &b);
    if (resto == 0) {
        printf ("yes\n");
    } else {
        printf ("no\n");
    }
    return 0;

}