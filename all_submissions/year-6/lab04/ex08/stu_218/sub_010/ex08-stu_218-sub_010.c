
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str1[MAX], str2[MAX];

    scanf("%100s %100s", str1, str2);

    if (strcmp(str1, str2) >= 0) {
        printf("%s\n", str1);
    } else {
        printf("%s\n", str2);
    }

    return 0;
}