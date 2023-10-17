

#include <stdio.h>

#define FIRST 1
#define REST 0

int digit(int c) {
    return '0' <= c && c <= '9';
}
int conversion_to_int (int number, int c) {
    return number = number * 10 + (c - '0');
}

int main() {
    int c, sum = 0, st = FIRST, currentnumber;
    c = getchar();
    while (c  != '\n') {
        currentnumber = 0;
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
                        currentnumber = currentnumber * 10 + (c - '0');
                        c = getchar();
                    }
                    sum += currentnumber;
                }
                else if (c == '-') {
                    c = getchar();
                    c = getchar();
                    while (digit(c)) {
                        currentnumber = currentnumber * 10 + (c - '0');
                        c = getchar();
                    }
                    sum -= currentnumber;
                } 
        }
        if (st != REST)        
            c = getchar();
    }
    printf("%d\n", sum);
    return 0;
}