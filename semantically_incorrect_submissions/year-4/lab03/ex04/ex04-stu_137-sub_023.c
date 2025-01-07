
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int c, isNum = 0;
    while((c = getchar()) != EOF){
        if(c >= '1' && c <= '9'){
            isNum = 1;
            putchar(c);
        }
        else if(c == '0'){
            if(isNum){
                putchar(c);
            }
            else{
                int next = getchar();
                if(next == ' ' || next == '\n' || next == EOF){
                    putchar('0');
                    if(next != EOF){
                        putchar(next);
                    }
                }
                else if(next >= '1' && next <= '9'){
                    isNum = 1;
                    putchar(next);
                }
            }
        }
        else{
            putchar(c);
            isNum = 0;
        }
    }
    
    return 0;
}