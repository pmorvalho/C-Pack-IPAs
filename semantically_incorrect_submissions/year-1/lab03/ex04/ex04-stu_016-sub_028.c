#include <stdio.h>

int main(){
    int c, found_zero = 0;
    while((c = getchar()) != EOF){
        if(c == ' ') {
            if(found_zero) {
                printf("%c", '0');
                found_zero = 0;
            }
            printf("%c", c);
        } else if(c != '0') {
            printf("%c", c);
            found_zero = 0;
        } else {
            found_zero = 1;
        }
    }
    return 0;
}
