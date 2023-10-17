
#include <stdio.h>

#define PALAVRA 0
#define IGNORA 1
#define FRAZE 2

int main() {
    int prev_s;
    int state = FRAZE;
    int car = getchar();
    
    while (car != '\n') {
        if (car == '"' || car == '/') {
        
            if (car == '"' && state == FRAZE)
                state = PALAVRA;
            else if (car == '"' && state == PALAVRA)
                state = FRAZE;
            if (car == '/' && state != IGNORA) {
                state = IGNORA;
                prev_s = state;
            }
        }
        else {
        
            if (state == PALAVRA)
                printf("%c", car);
            if (state == FRAZE && car == ' ')
                printf("\n");
            if (state == FRAZE && car != ' ')
                printf("%c", car);
            if (state == IGNORA) {
                printf("%c", car);
                state = prev_s;
            }
        }
        car = getchar();
    }
    printf("\n");
    return 0;
}