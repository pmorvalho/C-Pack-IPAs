

#include <stdio.h>
#include <string.h>

#define MAX 80
#define PAL 1
#define N_PAL 0

int main() {

    int i;
    int len, estado = PAL;
    char str[MAX];

    scanf("%s",str);
    len = strlen(str);

    for (i=0; i<len/2; i++) {

        if (str[i] != str[len-1-i])
            estado = N_PAL;
    }

    if (estado == PAL)
        puts("yes");
    else
        puts("no");

    return 0;
}
