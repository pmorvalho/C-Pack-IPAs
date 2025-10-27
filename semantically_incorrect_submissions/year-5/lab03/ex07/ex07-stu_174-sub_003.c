
#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    int sum = 0, total = 0;
    while((c = getchar()) != '\n'){
        switch (c) {
            case ' ':
                break;
            case '+':
                sum = 1;
                break;
            case '-':
                sum = 2;
                break;
            default:
                if(sum == 1) {
                    total += atoi(&c);
                    break;
                } 
                if(sum == 2) {
                    total -= atoi(&c);
                    break;
                }  
                total = atoi(&c);
                break;
        }
    }
    printf("%d\n", total);
    return 0;
}