
#include <stdio.h>
#include <assert.h>

int aton(char init){
    int n = init - '0';
    int c;
    while ( (c = getchar()) != ' ' && c != '\n' && c != EOF)
        n = 10 * n + (c - '0');

    return n;
}

int main() {
    int acumulado = 0;
    int read;
    int current = 0;
    char last_op = '+';

    while ((current = getchar()) != EOF && current != '\n') {
        if (current >= '0' && current <= '9'){
            read = aton(current);
            switch (last_op)
            {
            case '+':
                acumulado += read;
                break;
            case '-':
                acumulado -= read;
                break;
            default:
                break;
            }
        }
        else if (current == '+')
            last_op = '+';
        else if (current == '-')
            last_op = '-';
        }

    printf("%d\n", acumulado);    
    return 0;
}
