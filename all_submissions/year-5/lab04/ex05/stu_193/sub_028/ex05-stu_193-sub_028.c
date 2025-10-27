

# include <stdio.h>
# include <string.h>

int leLinh(char s[]) {
    int i = 0;
    char c;

    while ((c = getchar()) != EOF && c != '\n') {
        s[i] = c;
        i++;
    }

    s[i] = '\0';


    return i;
}

int main() {
    char s[100];
    int num_len, i = 0;

    num_len = leLinh(s);
    while (i < num_len) {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
    return 0;
}