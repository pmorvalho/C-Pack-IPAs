
#include <stdio.h>

int main() {
    int v1, v2;

    scanf("%d%d", &v1, &v2);

    if (v1>v2){
        printf("%d\n%d\n", v2, v1);
    } else {
        printf("%d\n%d\n", v1, v2);
    }
}