
#include <stdio.h>
#include <string.h>
#ifndef DIM
#define DIM 80
#endif

int main() {
    char str1[DIM], str2[DIM];
    int len1, len2, i;

    scanf("%s %s", str1, str2);

    len1 = strlen(str1); len2 = strlen(str2);

    if (len1 < len2) {
        printf("%s\n", str2);
    } else if (len2 < len1) {
        printf("%s\n", str1);
    }
    else {
        for (i=0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                if (str1[i] < str2[i]) {
                    printf("%s\n", str2);
                    return 0;
                } else {
                    printf("%s\n", str1);
                    return 0;
                }
            }
        }
    }
    return 0;
}