
#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {

    char s[MAX];
    int n, i;

    scanf("%s", s);

    for(n = 0; n < MAX; n++) {
        if (s[n] == '\0')
            break;
    }

    for (i = 0; i < n; i++) {
        if (s[i] == s[n-i-1]) {
            continue;
        } else {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");

    return 0;

}
