
#include <stdio.h>

int main(){
    int c;
    int state = 0;

    while ((c = getchar()) && c != '\n'){
        if(c == '"'){
            state = !state;
            if(!state) putchar('\n');
        }
        else {
            if (state){
                if(c == '\\') putchar(getchar());
                else putchar(c);
            }
        }
    }
    return 0;
}