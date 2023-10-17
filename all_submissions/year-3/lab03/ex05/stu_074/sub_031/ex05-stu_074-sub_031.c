
#include <stdio.h>

#define PALAVRA 0
#define IGNORA 1
#define FRAZE 2

int main() {
    int prev_s;
    int state = FRAZE;
    int car = getchar();

    while (car != '\n') {
        switch (state) {

            case FRAZE:
                if (car == '"')
                    state = PALAVRA;
                else if (car == '/') {
                    prev_s = state;
                    state = IGNORA;
                }
                else if (car == ' ')
                    printf("\n");
                else
                    printf("%c", car);
                break;

            case PALAVRA:
                if (car == '"')
                    state = FRAZE;
                else if (car == '/') {
                    prev_s = state;
                    state = IGNORA;
                }
                else
                    printf("%c", car);
                break;

            case IGNORA:
                printf("%c", car);
                state = prev_s;
                break;
            
            default:
                printf("Error: State fell out of scope.\n");
        }

        car = getchar();
    }
    printf("\n");
    return 0;
}