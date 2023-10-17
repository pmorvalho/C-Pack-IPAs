

#include <stdio.h>
#include <string.h>

#define MAX 80

int palavra(char str[]) {

    int i, j;

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j])
            return 0;
    }
    return 1;
}
int main () {

    char str[MAX] = "";

    scanf("%s", str);
    printf("%s\n", palavra(str) ? "yes" : "no");
    return 0;
}