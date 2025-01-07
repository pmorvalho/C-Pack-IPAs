
#include <stdio.h>

int main(){
    char c;
    int is_seq = 0, barra = 0;

    while ((c = getchar()) != EOF){
        if (barra == 1){
            putchar(c);
            barra = 0;
        }
        
        
        else{
            if (c == '"'){    
                if (is_seq == 0){
                    is_seq = 1;
                }
                else{
                    is_seq = 0;
                    putchar('\n');
                }
            }

            else if (is_seq == 1){
                putchar(c);
            }      
        }
    }

    return 0;
}