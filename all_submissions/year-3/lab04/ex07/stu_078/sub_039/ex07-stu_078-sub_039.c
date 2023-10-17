

#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c);
int lelinha(char s[]);
void anIndexDown(char s[], int currentIndex);

int main() {
    char s[MAX], charact;
    lelinha(s);
    scanf("%c", &charact);
    apagaCaracter(s, charact);
    printf("%s\n", s);
    return 0;
}

int lelinha(char s[]) {
    int i, c;

    for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}

void anIndexDown(char s[], int currentIndex) {
    int i;
    for (i = currentIndex; s[i] != '\0'; i++)
        s[i] = s[i + 1];

}
void apagaCaracter(char s[], char c) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == c)
            anIndexDown(s, i);
        else
            i++;       
    }

}   