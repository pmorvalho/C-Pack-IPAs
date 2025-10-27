

#include <stdio.h>


int main() {

    int a, b, resto;
    scanf ("%d %d", &a, &b);
    resto = a % b;
    
    if (resto == 0) {
        printf ("yes\n");
    } else {
        printf ("no\n");
    }
    return 0;

}