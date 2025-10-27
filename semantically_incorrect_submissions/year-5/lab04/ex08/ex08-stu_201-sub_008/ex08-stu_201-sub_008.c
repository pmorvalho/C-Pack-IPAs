
#include <stdio.h>
#define MAX 80

int leNumero(char s[]) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != ' ' && c != '\n' && c != '\0';
         ++i)
        s[i] = c;
    s[i + 1] = '\0';
    return i;
}

int main() {
    char num1[MAX], num2[MAX];
    int size1, size2, i;

    size1 = leNumero(num1);
    size2 = leNumero(num2);

    if (size1 != size2)
        printf("%s\n", size1 > size2 ? num1 : num2);
    else
        for (i = 0; i < size1; ++i)
            if (num1[i] != num2[i])
                printf("%s\n", num1[i] > num2[i] ? num1 : num2);

    return 0;
}