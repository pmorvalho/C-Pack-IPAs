
#include <stdio.h>
#define FORA 0
#define DENTRO 1
#define ZERO 2

int main() {
    char current;
    int current_state = FORA;

    while((current = getchar())!=EOF) {
        if (current_state == FORA) {
            if (non_zero(current)) {
                putchar(current);
                current_state = DENTRO;
            } else if (current == '0') {
                current_state=ZERO;
            } else{
                putchar(current);
            }
        } else if (current_state == DENTRO) {
            putchar(current);
            if (spc(current)) {
                current_state = FORA;
            }
        } else if (current_state == ZERO) {
            if (soc(current)) {
                putchar('0');
                putchar(current);
                current_state=FORA;
                
            }else if (non_zero()){
        }
    }
    return 0;
}
}