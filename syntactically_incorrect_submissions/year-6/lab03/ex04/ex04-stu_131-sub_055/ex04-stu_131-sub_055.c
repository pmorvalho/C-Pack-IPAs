
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char s[MAX];

    fgets(s, MAX, stdin);

        char *token = strtok(s, " ");

        while (token != NULL) {
            while (*token == '0' && *(token + 1) != '\0') {
                token++;
            }
            printf("%s", token);
            token = strtok(NULL, " ");
            if (token != NULL)
                printf(" ");
        }
    return 0;
}