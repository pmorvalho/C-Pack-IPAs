
#include <stdio.h>

#define ADD = '+'
#define SUB = '-'
#define
int main() {
    char input[100], op;
    int total = 0, num1, num2, i, mult = 1;

    scanf("%s", &input);
    
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == " ") {
            mult = 1;
        }        
    }
    return 0;
}