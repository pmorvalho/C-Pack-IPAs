
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int c, prev = ' ';
    while((c = getchar()) != EOF){
        if(c >= '1' && c <= '9'){
            prev = c;
            putchar(c);
        } else {
            if(prev == ' ' || prev == '\n' || prev == EOF){
                int next = getchar();

                if(next == ' ' || next == '\n' || next == EOF){
                    putchar('0');
                    if(next != EOF){
                        putchar(next);
                        prev = next;
                    }
                    else{prev = '0';}
                }
                else{
                    if(next != '0'){ 
                        prev = '0';
                    }
                    ungetc(next, stdin);
                }
            }
            else{
                putchar(c);
                prev = c;
            }
        }
    }
    
    return 0;
}