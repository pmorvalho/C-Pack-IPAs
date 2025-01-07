#include <stdio.h>
#include <string.h>
#include <stdbool.h>



#define FORA  0
#define DENTRO 1
#define ZERO 2

bool non_zero (char current) {
    
    return current >= 31 && current <= 39;
}

bool spc (char current) {

    return current == ' ' || current == '\n' || current == 

}

int main() {

    int current;
    int current_state = FORA;

    while((current = getchar()) != EOF) {

        if (current_state == FORA) {
            if (non_zero(current)) {

                putchar(current);
                current_state = DENTRO

            } else if (current == '0') {
                current_state = ZERO
            } else {
                putchar(current);
            }


        } else if (current_state == DENTRO) {
            
            putchar(current);

            
            if (spc(current)) {

                current_state = FORA
            }

        } else if (current_state == ZERO) {

            if (spc(current)) {

                putchar('O');
                putchar(current);
                current_state = FORA;
    
            } else if (non_zero(current)) {

                putchar(current);
                current_state = DENTRO
            }


        }



    }

    return 0;
}
