

#include <stdio.h>

enum state{
    IN,
    OUT,
};

int main(){

    char c;

    enum state curr_state = OUT;

    while ((c = getchar()) != EOF){

        switch (curr_state){

            case IN:{

                printf("%c", c);
                if (c == ' '){
                    curr_state = OUT;
                }
                break;
            }

            case OUT:{

                if (c == ' '){
                    printf("0 ");
                }

                else if (c == '\n'){
                    printf("0\n");
                }

                else if (c != '0'){
                    printf("%c", c);
                    curr_state = IN;
                }
                
                break;
            }

        }

    }

    return 0;
}