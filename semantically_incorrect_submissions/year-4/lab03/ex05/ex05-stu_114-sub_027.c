
#include <stdio.h>
#include <string.h>






#define ASPAS 0
#define BACKSLASH 1
#define CHAR 2

int eh_char(char caracter) {

    return (65 <= caracter && caracter <= 90) || (97 <= caracter && caracter <= 122);

}

int eh_bckslh(char caracter) {

    return caracter == 92; 

}

int eh_aspas(char caracter) {

    return caracter == 34; 

}


int main () {

    int current = ASPAS, current_status;

    while ((current_status = getchar()) != EOF) {

        if (eh_aspas(current_status)) {


            if (current == BACKSLASH) {

                putchar(current_status);
            }
        
        current = ASPAS;

        } else if (eh_char(current_status)) {

            if (current == CHAR) {

                putchar(current_status);

            } else if (current == ASPAS) {

                putchar(current_status);
        
            } else if (current == BACKSLASH) {

                putchar(current_status);
            }
        current = CHAR;
        }


        else if (eh_bckslh(current_status)) {

            if (current == BACKSLASH) {

                putchar(current_status);

            } else if (current == CHAR) {

            }

             current = BACKSLASH;
        }

    }


    return 0;

}