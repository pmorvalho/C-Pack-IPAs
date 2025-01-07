
#include <stdio.h>

int main() {
    int num_1, num_2, num_3, auxiliar;
    scanf("%d %d %d", &num_1,&num_2,&num_3);
    if (num_1>num_2) {
        auxiliar=num_1;
        num_1=num_2;
        num_2=auxiliar;
    }

    if (num_3>num_2) {
        printf("%d %d %d\n", num_1,num_2,num_3);
    } else {
        printf("%d %d %d\n", num_1,num_3,num_2);
    }

    return 0;
}