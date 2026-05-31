

#include <stdio.h>

int main(){

    char c;

    int total = 0;

    while ((c = getchar()) != '\n'){

        total += c - '0';

    }

    if (total % 9 == 0)
        printf("yes\n");

    else
        printf("no\n");

    return 0;
}