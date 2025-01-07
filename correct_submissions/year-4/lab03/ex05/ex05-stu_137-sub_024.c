
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    
    int c, isQuote = 0, isEscape = 0;
    while((c = getchar()) != EOF){
        if(isEscape){
            putchar(c);
            isEscape = 0;
        }
        else if(c == '\\'){
            isEscape = 1;
            continue;
        }
        else if(c == '"' && !isEscape){
            if(isQuote){
                putchar('\n');
            }
            isQuote = !isQuote;
            continue;
        }
        else if(isQuote){
            putchar(c);
        }
    }
    return 0;
}