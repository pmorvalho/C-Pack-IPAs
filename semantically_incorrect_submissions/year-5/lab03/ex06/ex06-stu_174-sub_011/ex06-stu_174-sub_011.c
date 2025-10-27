
#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    int sum = 0;
    while((c = getchar()) != '\n'){
        sum += atoi(&c);
    }
    
    if(sum % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}