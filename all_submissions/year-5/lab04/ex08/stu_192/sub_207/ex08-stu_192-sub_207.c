
#include <stdio.h>

#define MAX 80

int main() {
    char n, num1[MAX], num2[MAX];
    int e = -1, i = 0;
    n = getchar();
    while(n != ' ') {
        num1[i] = n;
        ++i;
        n = getchar();
    }
    num1[i] = '\n';
    ++i;
    num1[i] = '\0';
    i = 0;
    n = getchar();
    while(n != '\n' && n != EOF) {
        num2[i] = n;
        ++i;
        n = getchar();
    }
    num2[i] = '\n';
    ++i;
    num2[i] = '\0';
    i = 0;
    while(num1[i] != '\0') {
        if(num1[i] == num2[i]) {
             ++i;
        } else {
            e = i;
            ++i;
        }
    }
    i = 0;
    if(e == -1) {
        printf("%s", num1);
    } else {
        while(num1[i] == num2[i]) {
            ++i;
        }
        (num1[i] > num2[i]) ? printf("%s", num1) : printf("%s", num2);
    }
    return 0;
}