
#include <stdio.h>

int main() {
    int car;
    int state_in = 0;  

    while ((car = getchar()) != EOF) {
        if (car == '"') {
            state_in = !state_in;  
        } else {
            if (state_in) {
                if (car == '\\') {
                    putchar(getchar());
                } else {
                    putchar(car);
                }
            }
        }

        if (!state_in && car == '"') {
            putchar('\n');
        }
    }

    return 0;
}
