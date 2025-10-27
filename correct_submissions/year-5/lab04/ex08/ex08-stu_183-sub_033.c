

#include <stdio.h>
#define MAX 80


int main() {
    char n1[MAX], n2[MAX];
    int i;
    scanf("%s %s", n1, n2);
    for (i = 0; n1[i] != '\0'; i++) {
        if (n1[i] > n2[i]) {
            printf("%s\n", n1);
            return 0;
        }
        if (n1[i] < n2[i]) {
            printf("%s\n", n2);
            return 0;
        }
    }
    printf("%s\n", n1);
    return 0;
}