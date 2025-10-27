
#include <stdio.h>

int main() {
    char c;
    int zero = 0;

    while ((c = getchar()) != EOF) {
        if (c == '0'){
            putchar("");
            zero = 1;
        }
        if (c >= '1' && c <= '9'){
            putchar(c);
            zero = 0;
        } else if (zero == 1){
      
        }
    }

    return 0;
}
