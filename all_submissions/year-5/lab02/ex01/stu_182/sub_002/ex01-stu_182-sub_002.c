
#include <stdio.h>

int main() {

    int max, c, i;

    scanf("%d", &c);
    max = c;

    for(i = 0; i < 2; i++){
        scanf("%d", &c);
        if(c >= max)
            max = c;
    }
    printf("%d\n", max);
    return 0;
}