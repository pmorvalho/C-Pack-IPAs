

# include <stdio.h>
# include <string.h>

# define DIM 80

int main() {
    int i = 0, max_i;
    char s[DIM];

    scanf("%s",s);
    max_i = strlen(s) - 1;

    while(1) {
        if (s[i] != s[max_i]) {
            printf("no\n");
            break;
        }
        if (i >= max_i) {
            printf("yes\n");
            break;
        }
        i++;
        max_i--;
    }
    return 0;
}