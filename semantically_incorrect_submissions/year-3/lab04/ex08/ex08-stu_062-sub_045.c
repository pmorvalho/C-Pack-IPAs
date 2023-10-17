
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 202

void leLinha(char s[MAX]);

int main() {

    char input[MAX];
    char num1[100];
    char num2[100];
    int sep, i;
    int j = 0;

    leLinha(input);

    
    for (i = 0; i < 100; i++) {
        if (input[i] != ' ') {
            num1[i] = input[i];
        } else {
            sep = i;
            break;
        }
    }

    
    for (i = sep; input[i] != '\0'; i++) {
        num2[j] = input[i];
        j++;
    }

    
    for (i = 99; i >= 0; i--) {
        if (num1[i] > num2[i]) {
            printf("%s", num1);
            break;
        } else if (num1[i] < num2[i]) {
            printf("%s", num2);
            break;
        }
    }

    putchar('\n');
    return 0;
}

void leLinha(char s[MAX]) {

    char c;
    int j = 0;

    while ((c = getchar()) != EOF) {

        if (c == '\n') {
            break;
        }
        if (c < '0' || c > '9')
            break;

        s[j] = c;
        j++; 
    }

}