

#include <stdio.h>

int main(){

    char c;
    int in = 0, scape = 0;
    
    while ((c = getchar()) != '\n'){

        if (scape == 1){
            putchar(c);
            scape = 0;
        }
        else{

            if (c == '"' && in == 0){
                in = 1;
            }
            else if (in == 0){
                continue;
            }
            else if (c == '\\' && in == 1){
                scape = 1;
            }
            else if (c == '"' && in == 1){
                printf("\n");
                in = 0;
            }
            else{
                putchar(c);
            }
        }
    }
    return 0;
}
    

