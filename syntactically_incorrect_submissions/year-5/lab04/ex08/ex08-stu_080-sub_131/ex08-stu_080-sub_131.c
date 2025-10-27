
#include <stdio.h>
#define MAX 100

int maior(char n1[], char n2[]) {
    int i;
    for (i = 0; n1[i] == n2[i] && n1[i] != '\0'; i++);
    if (n1[i] > n2[i]) {
        return 0;
    } else {
        return 1;
    }
}

int leLinha(char s[]) {
    int i, c;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n' && c != ' '; i++) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

int main(){
    char num1[MAX], num2[MAX];
    leLinha(num1);
    leLinha(num2);

    int ver = maior(num1, num2);

    if (ver == 0)
        printf("%s\n", num1);
    else
        printf("%s\n", num2);


    return 0;
}

