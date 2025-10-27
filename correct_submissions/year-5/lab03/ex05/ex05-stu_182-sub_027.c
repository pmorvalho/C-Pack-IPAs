
#include <stdio.h>
#define IN 0
#define OUT 1

int main(){
    int c;
    int state = OUT; 
    int backslash = OUT;
    
    while((c = getchar()) != EOF){
        if(state == OUT){
            if(c == '"'){
                state = IN;
            }
        }

        else{
            if(backslash == OUT){
                if(c == '\\'){
                    backslash = IN;
                }

                else if(c == '"'){
                    state = OUT;
                    putchar('\n');  
                }

                else{
                    putchar(c);
                }
            }

            else{ 
                putchar(c);  
                backslash = OUT;  
            }
        }
    }
    return 0;
}