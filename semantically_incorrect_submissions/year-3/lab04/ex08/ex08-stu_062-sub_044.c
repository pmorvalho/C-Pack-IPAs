
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
    int j, k = 0;

    leLinha(input);

    
    for (i = 0; i < 100; i++) {

        if ((input[i] >= '0') && (input[i] <= '9')) {
            num1[k] = input[i];
            k++;
        } else if (input[i] != ' ') {
            sep = i;
            break;
        } 
    }

    
    for (i = sep + 1; i < MAX; i++) {

        if ((input[i] >= '0') && (input[i] <= '9')) {
            num2[j] = input[i];
            j++;
        } else {
            continue;
        }
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
        } else { 
            s[j] = c;
            j++; 
        }
  
    }

}