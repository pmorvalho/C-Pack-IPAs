
#include <stdio.h>

int main(){
    char c;

    
    int fase = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (fase == 1){ 
                putchar('0');
            }
            fase = 0;
            putchar(c);
        } else if (c == '0' && fase != 2){ 
            fase = 1;
        } else { 
            fase = 2;
            putchar(c);
        }
    }
    

    return 0;
}