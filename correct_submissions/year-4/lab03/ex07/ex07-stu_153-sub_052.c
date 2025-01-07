
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

    char c = 0;
    char num[BUFSIZ];
    bool num_flag = false;
    bool sub_flag = false;
    int sum = 0;
    int num_len = 0;

    while (c = getchar(), c != '\n') {
        if (c == ' ' ) {
            num_flag = false;
            if (num_len > 0) {
                num[num_len] = '\0';
                if (sub_flag == false) {
                    sum += atoi(num);
                }
                else {
                    sum -= atoi(num);
                    sub_flag = false;
                }
                num_len = 0;
            }
        }
        else if (c >= '0' && c <= '9') {
            if (c == '0' && num_flag == false) {
                continue;
            }
            if (c == '0' && num_flag == true) {
                num[num_len] = c;
                num_len++;
                continue;
            }
            if (c != '0') {
                num_flag = true;
                num[num_len] = c;
                num_len++;
            }
        }
        else if (c == '+') {
            num_flag = false;
        }
        else if (c == '-') {
            num_flag = false;
            sub_flag = true;
        }

    }

    if (num_len > 0) {
        num[num_len] = '\0';
        if (sub_flag == false) {
            sum += atoi(num);
        }
        else {
            sum -= atoi(num);
        }
    }

    printf("%d\n", sum);

    return 0;
}