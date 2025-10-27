

#include <stdio.h>
#include <ctype.h>

#define DIM 1000

int main() {
    int c;
    int num[DIM];
    int i= 0;

    while ((c = getchar()) != EOF && i < DIM -1) {
        num[i] = c;
        i++;
        }

    for (int j = 0; j < i; j++) {
        if (num[j] == '0' && (num[j+1] == ' ' || num[j+1] =='\n'))
            putchar(num[j]);
    
        if (num[j] != '0' && (num[j+1] == ' ' || num[j+1] =='\n' || ('1' <= num[j+1] <= '9')))
            putchar(num[j]);
    }

    return 0;
}