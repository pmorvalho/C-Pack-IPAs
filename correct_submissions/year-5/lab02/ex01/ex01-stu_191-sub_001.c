
#include <stdio.h>

int main () {
    int v1, v2, v3;
    int max = 0;

    scanf("%d", &v1); 
    scanf("%d", &v2);
    scanf("%d", &v3);

    if (v1 >= v2) {
        if (v1>=v3){
            max = v1;
        } else {
            max = v3;
        }
    } else {
        if (v2>=v3){
            max = v2;
        } else {
            max = v3;
        }
    }

    printf("%d\n", max);
    return 0;
}