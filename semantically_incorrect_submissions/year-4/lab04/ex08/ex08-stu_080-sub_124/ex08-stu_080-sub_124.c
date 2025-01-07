
#include <stdio.h>
#define MAX 100

int leLinha(char s[]) {
    int i, c;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

int main(){
    char num1[MAX], num2[MAX];
    int i;
    leLinha(num1);
    leLinha(num2);

    for (i = 0; num1[i] == num2[i] && num1[i] != '\0'; i++);
    if (num1[i] > num2[i]) {
        printf("%s\n", num1);
    } else {
        printf("%s\n", num2);
    }

    return 0;
}
