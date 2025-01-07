
#include <stdio.h>
#include <string.h>

void apagaCaracter(char s[], char a) {
    int i, j;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == a) {
            for (j = i; j < strlen(s) - 1; j++) {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
            s[j] = '\0';
        }   
    }
}

int main(void) {
    char s[100];
    char c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    char a;
    scanf("%c", &a);
    apagaCaracter(s, a);
    printf("%s", s);


    return 0;
}