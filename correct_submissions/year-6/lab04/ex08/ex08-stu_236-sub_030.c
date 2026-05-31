
#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){
    char x[MAX], y[MAX];
    int nX, nY, i;
    scanf("%s %s", x, y);
    nX = strlen(x);
    nY = strlen(y);
    if (nX == nY) {
        for (i = 0; i < nX && x[i] == y[i]; i++);
        if (i < nX)
            printf("%s\n", x[i] > y[i] ? x : y);
        else
            printf("%s\n", x);
    }
    else {
        printf("%s\n", nX > nY ? x : y);
    }
    return 0;
}