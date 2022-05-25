#include <stdio.h>
#include <string.h>
#define MAX 80

int main () {

    char number_1[MAX], number_2[MAX];
    __u_long i;

    scanf("%s %s", number_1, number_2);

    for (i = 0; i < (strlen(number_1)); i++) {

        if (number_1[i] > number_2[i]) {
            printf("%s\n", number_1);
            break;
        } else if (number_2[i] > number_1[i]) {
            printf("%s\n", number_2);
            break;
        }

    }

    return 0;
}