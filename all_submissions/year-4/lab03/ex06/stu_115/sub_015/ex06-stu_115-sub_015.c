
#include <stdio.h>

int main() {
    char input[100];
    scanf("%s", input);

    int sum = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        sum += input[i] - '0';
    }

    if (sum % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
