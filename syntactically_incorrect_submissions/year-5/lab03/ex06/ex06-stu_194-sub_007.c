

#include <stdio.h>

int main() {
    int c;

    int total = 0;

    while ((c = getchar()) != EOF && c != '\n' && c != ' ') {
        if (total < '0' || total > '9') continue;
        
        total = (total + c - '0') % 9;
    }

    printf(total == 0 ? "yes" : "no");
    printf("\n");
}