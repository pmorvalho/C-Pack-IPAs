

#include <stdio.h>

enum state {DENTRO, FORA};

int main(){

    enum state st = DENTRO;
    int c, a;
    while( (c= getchar())!= EOF){

        switch(st){

            case DENTRO:
                if (c == '"'){
                    a = a + 1;
                    putchar(c);
                }
                    if (a == 2){
                        putchar(c);
                        putchar('\n');
                        st = FORA;
                    }
                else
                    putchar(c);
                break;

            case FORA:
                if (c == ' ')
                    st = DENTRO;
                break;
            
            



        }
    }
    return 0; 

}