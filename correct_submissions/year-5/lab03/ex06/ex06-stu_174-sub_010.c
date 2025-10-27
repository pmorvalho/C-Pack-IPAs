
#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    int sum = 0;
    while((c = getchar()) != '\n' && c != EOF){
        sum += c - '0';
    }

    if(sum % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}