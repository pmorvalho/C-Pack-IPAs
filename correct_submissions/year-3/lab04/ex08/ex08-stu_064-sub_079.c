

#include <stdio.h>
#define MAX 100

int leLinha(char str[]) {
    int i = 0, c;
    while ((c = getchar()) != EOF && c != '\n' && c != ' ')
        str[i++] = c;
    str[i] = '\0';
    return i;
}

char *maior(char num1[], char num2[]) {
    int i;
    for (i = 0; num1[i] != '\0'; i++) 
        if (num1[i] > num2[i]) 
            return num1;
    return num2;
}


int main() {
    char num1[MAX], num2[MAX];
    leLinha(num1);
    leLinha(num2);
    printf("%s\n", maior(num1, num2));
    return 0;
}