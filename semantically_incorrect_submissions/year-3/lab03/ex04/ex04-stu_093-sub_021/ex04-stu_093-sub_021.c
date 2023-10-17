
#include  <stdio.h>
#define NOT_PRINTED 0
#define PRINTED 1

void in_number(char c);

void in_number(char c){

    int state = NOT_PRINTED;

    while(c != ' ' && c != '\n' && c != EOF){
        if(c != '0' || state == PRINTED){
            putchar(c);
            state = PRINTED;
            c = getchar();
        }else
            c = getchar();
    }

    if(state == NOT_PRINTED)
        putchar('0');
    else
        putchar(' ');
}

int main(){

    char c;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n')
            ;
        else
            in_number(c);
    }

    printf("\n");

    return 0;
}