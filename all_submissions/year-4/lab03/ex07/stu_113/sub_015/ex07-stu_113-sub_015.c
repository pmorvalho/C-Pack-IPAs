
#include <stdio.h>

enum states {OUT, NUM};
enum ops {MINUS, PLUS, NON};

int main () {
    char current; 
    int sum = 0, num = 0;
    enum states state = NUM; enum ops op = NON;

    while ((current = getchar()) != '\n') { switch (state) {

            case NUM:
                if (current != ' ') { num = num * 10 + (current - '0');
                } else  state = OUT;
                break;
            case OUT:
                if (num != 0){
                    if (op == NON) { sum = num;
                    } else if (op == MINUS) { sum -= num;
                    } else sum += num;
                    num = 0;
                }

                if (current == '-') { op = MINUS;
                } else if (current == '+') { op = PLUS;
                } else if (current != ' ') {
                    state = NUM;
                    num = current - '0';
                }
                break;
        } }

    sum = (op == MINUS) ? sum - num : sum + num;
    printf("%d\n", sum);
    return 0;
}
