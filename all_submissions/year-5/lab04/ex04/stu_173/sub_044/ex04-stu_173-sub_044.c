

#include <stdio.h>
#include <string.h>

#define MAX 80

enum booleano {
    NAO, 
    SIM
};

int main() {
    int len;
    char palavra[80];
    enum booleano palindromo = SIM;

    scanf("%s", palavra);
    len = strlen(palavra);
    if (len > 79) {
        return 1;
    }

    for (int i = 0; i < len; i++) {
        if (palavra[i] != palavra[len - i - 1]) {
            palindromo = NAO;
            break;
        }
    }

    switch (palindromo) {
        case SIM:
            printf("yes\n");
            break;
        case NAO:
            printf("no\n");
            break;
        default:
            printf("error\n");
    }

    return 0;
}