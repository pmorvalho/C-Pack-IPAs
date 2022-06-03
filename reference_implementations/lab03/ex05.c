
#include <stdio.h>
#include <assert.h>
#define FORA 1
#define ESC 2
#define DENTRO 3

int main() {
    int current;
    int state = FORA;
    while ((current = getchar()) != EOF) {
        switch (state) {
        case FORA:
            if (current == '"') state = DENTRO;
            break;
        case DENTRO:
            switch (current) {
            case '\\': state = ESC; break;
            case '"': putchar('\n'); state = FORA; break;
            default: putchar(current);
            }
            break;
        case ESC:
            putchar(current);
            state = DENTRO;
            break;
        default:
            assert(0);
        }
  }
  return 0;
}
