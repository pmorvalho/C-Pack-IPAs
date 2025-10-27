
#include <stdio.h>

void is_divisible_by_9(char number_str[]) {
    int digit_sum = 0;
    for (int i = 0; number_str[i] != '\0'; i++) {
        digit_sum += number_str[i] - '0'; 

    }
    if (digit_sum % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}

int main(void) {
    char number_str[101];
    scanf("%100s", number_str);
    is_divisible_by_9(number_str);
    return 0;
}