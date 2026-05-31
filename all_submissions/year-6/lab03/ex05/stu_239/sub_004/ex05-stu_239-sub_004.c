

#include <stdio.h>

enum state{
    OUT,
    IN,
    BAR
};

int main(){

    char c;

    enum state curr_state = OUT;

    while ((c = getchar()) != '\n'){
        switch(curr_state){

            case OUT:{
                if (c == '"'){
                    curr_state = IN;
                }
                break;
            }

            case IN:{

                if (c == 57){
                    curr_state = BAR;
                }
                else if (c == '"'){
                    printf("\n");
                    curr_state = OUT;
                }
                else {
                    printf("%c", c);
                }
                break;
            }

            case BAR:{
                printf("%c", c);
                curr_state = IN;
                break;
            }

        }
    }

    return 0;
}