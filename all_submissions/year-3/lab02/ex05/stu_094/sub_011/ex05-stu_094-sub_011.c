

#include <stdio.h>

int main () {

    int v;
    int counter;
    
    scanf("%d", &v);

    for (counter = 1; counter <= v; counter++) {
        printf("%d\n", counter);
    }
    return 0;
}