
#include<stdio.h>
#include<string.h>

#define MAX 100

int main(){
    char x[MAX], y[MAX];
    int nX, nY, i;

    scanf("%s %s", x, y);

    nX = strlen(x);
    nY = strlen(y);
    
    if (nX == nY) {
        for (i = 0; i < nX; i++) {
            if (x[i] > y[i]) {
                printf("%s\n", x);
                return 0;
            }
            else if (x[i] < y[i]) {
                printf("%s\n", y);
                return 0;
            }
        }

        printf("%s\n", x);

    }

    return 0;
}