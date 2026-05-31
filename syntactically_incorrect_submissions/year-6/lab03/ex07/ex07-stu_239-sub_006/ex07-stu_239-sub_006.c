

#include <stdio.h>

int main(){

    char c;

    int total = 0;
    int mult = 1;

    while ((c = getchar()) != '\n'){

        switch (c){

            case '+':{

            }

            case '-':{

            }

            case ' ':{
                mult = 1;
            }

            default:{
                total = (total * mult) + c - '0';
                mult *= 10;
            }
        }
    }
}