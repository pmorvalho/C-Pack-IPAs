
#include <stdio.h>
#define IN 3
#define OUT 2
#define TRUE 1
#define FALSE 0

void in(char c);

void in(char c){
    
    int backslash = FALSE;

    while((c = getchar()) != '"' || backslash != FALSE){
        if(c == '\\' && backslash == FALSE)
            backslash = TRUE;
        else{
            putchar(c);
            backslash = FALSE;
        }
    }

    putchar('\n');

}

int main(){
    
    int c, state = OUT;

    while((c = getchar()) != EOF){
        if(c == '"' && state == OUT)
            in(c);
    }


    return 0;
}