
#include <stdio.h>
#include <string.h>

char *comparenums(char *n1, char *n2) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    if (len1 >= len2) {
        for(int i = 0; i < len2; i++) {
            if (n1[i] > n2[i]) {
                return n1;
            } else if (n1[i] < n2[i]) {
                return n2;
            }
        }
        return n1;
    } else {
        return n2;
    }
}

int main() {
    char n1[100], n2[100];

    scanf("%s %s", n1, n2);

    printf("%s\n", comparenums(n1, n2));
    return 0;
}