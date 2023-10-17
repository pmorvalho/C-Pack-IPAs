

#include <stdio.h>

#define FIRST 1
#define REST 0

int digit(int c) {
    return '0' <= c && c <= '9';
}

int main() {
    int c, sum = 0, st = FIRST, current_number;
    c = getchar();
    while (c  != '\n') {
        current_number = 0;
        switch(st){
            case FIRST:
                if (digit(c))
                    sum = sum * 10 + (c - '0');
                else
                    st = REST;
                break;
            case REST:
                c = getchar();
                if (c == '+') {
                    c = getchar();
                    c = getchar();
                    while (digit(c)) {
                        current_number = current_number * 10 + (c - '0');
                        c = getchar();
                    }
                    sum += current_number;
                }
                else if (c == '-') {
                    c = getchar();
                    c = getchar();
                    while (digit(c)) {
                        current_number = current_number * 10 + (c - '0');
                        c = getchar();
                    }
                    sum -= current_number;
                } 
        }
        if (st != REST)        
            c = getchar();
    }
    printf("%d\n", sum);
    return 0;
}