
#include <stdio.h>

int main() {
    char current; int state = 0;
    while ((current = getchar()) != EOF) {
        if (current == ' ') {
            if (state == 0) putchar('0');
            state = 1; 
            putchar(' '); 
        } else if (current != '0' || state == 2) {
            
            putchar(current);
            state = 2; 
        } else state = 0;
        
    }
    return 0;
}
