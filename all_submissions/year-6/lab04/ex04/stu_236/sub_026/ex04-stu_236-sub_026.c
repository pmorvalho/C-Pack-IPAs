
# include <stdio.h>
# include <string.h>
# define MAX 80
int main() {
    char s[MAX];
    int i, len, palindromo = 1;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            palindromo = 0;
            break;
        }
    }
    printf("%s\n", palindromo ? "yes" : "no");
}