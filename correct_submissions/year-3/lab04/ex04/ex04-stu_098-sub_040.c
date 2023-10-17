

#include <stdio.h>
#include <string.h>

#define NO 0
#define YES 1
#define MAX 80

int main() {

 char s[MAX-1];
 int len, i, estado = YES;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len/2; i++) {
        if (s[i] != s[len-1-i]) {
            estado = NO;
            break;
        }
    }

    if (estado == YES)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}