
#include <stdio.h>
int main(){
    char c;
    int skip = 0;
    while((c = getchar()) != EOF){
        if (skip){
            if (c == '0'){
                continue;
            } else if((c == ' ' || c == '\n')){
                putchar('0');
                putchar(c);
            } else {
                putchar(c); 
                skip = 0;
            }
        } else if (c == '0'){
            skip = 1;
        } else {
            putchar(c);
        }
    }
    return 0;
}