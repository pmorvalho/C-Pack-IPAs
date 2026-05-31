
#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c) {

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            for (int j = i; s[j] != '\0'; j++) {
                s[j] = s[j + 1];
            }
            i--;
        }
    }
}

int main() {
    char string[MAX + 1];
    char toDelete;

    scanf("%80[^\n]", string);
    scanf(" %c", &toDelete);

    apagaCaracter(string, toDelete);

    printf("%s\n", string);

}