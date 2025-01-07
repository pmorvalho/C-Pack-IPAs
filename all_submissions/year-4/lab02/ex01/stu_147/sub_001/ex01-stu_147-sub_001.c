
#include <stdio.h>

int main() {
    int n_1, n_2, n_3, foo;

    scanf("%d %d %d", &n_1, &n_2, &n_3);
    
    foo = n_1 > n_2 ? n_1 : n_2;
    foo = foo > n_3 ? foo : n_3;

    printf("%d\n", foo);

    return 0;

}    