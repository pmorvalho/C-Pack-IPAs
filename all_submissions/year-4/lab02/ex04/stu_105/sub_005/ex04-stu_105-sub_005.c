
#include <stdio.h>

int main() {
    int first, second, third;
    
    scanf("%d %d %d", &first, &second, &third);

    if (first <= second && first <= third) {
        printf("%d ", first);
        if (second <= third) {
            printf("%d %d\n", second, third);
        } else {
            printf("%d %d\n", third, second);
        }
    } else if (second <= first && second <= third) {
        printf("%d ", second);
        if (first <= third) {
            printf("%d %d\n", first, third);
        } else {
            printf("%d %d\n", third, first);
        }
    } else {
        printf("%d ", third);
        if (first <= second) {
            printf("%d %d\n", first, second);
        } else {
            printf("%d %d\n", second, first);
        }
    }

    return 0;
}