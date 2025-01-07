
#include <stdio.h>

int main() {
    int num = 0;
    int c;
    int flag = 1; 

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') { 
            if (c != '0') {
                flag = 0; 
            }
            if (!flag) {
                putchar(c); 
            }
        } else if (c == ' ' || c == '\n') {
            flag = 1; 
            if (num == 0) {
                putchar('0'); 
            }
            num = 0; 
            if (c == ' ') {
                putchar(' '); 
            }
        }
    }

    return 0;
}
