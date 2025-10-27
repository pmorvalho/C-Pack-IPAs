
#include <stdio.h>

int is_numeric(int i){
    return '0' <= i && i <= '9';
}

int main() {
    int c, inside_a_number = 0, has_leanding_zero = 0;

    while ((c = getchar()) != EOF) {

        if (!inside_a_number && c == '0') { 
            has_leanding_zero = 1;
            continue;
        }

        if (has_leanding_zero && c != '0') { 
            if(!is_numeric(c)) printf("0");
            has_leanding_zero = 0;
        }

        inside_a_number = '0' <= c && c <= '9';
        putchar(c);
    }

    return 0;
}