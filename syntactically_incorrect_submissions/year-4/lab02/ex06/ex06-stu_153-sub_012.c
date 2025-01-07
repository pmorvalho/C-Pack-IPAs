
#include <stdio.h>

int main() {
    int n, max, min, input;
    min = 0;
    max = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &input);
        if (input > max) {
            max = input;
        }
        if (input < min) {
            min = input;
        }
    }

}