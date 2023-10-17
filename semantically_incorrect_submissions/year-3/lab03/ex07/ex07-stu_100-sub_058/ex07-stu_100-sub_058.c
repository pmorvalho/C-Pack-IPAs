

#include <stdio.h>

int main() {
    int c,n, res = 0, op = '+';

    while ( (c = getchar()) != '\n')
    {

        if (c != ' ')
        {
            n += c - 48;
            n *=10;
        }
        n /= 10;
        if ( op == '+')
        {
            res += n;
        } else
            res -= n;
        getchar();
        op = getchar();
        getchar();
    }
    
    printf("%d\n", res);

    return 0;
}