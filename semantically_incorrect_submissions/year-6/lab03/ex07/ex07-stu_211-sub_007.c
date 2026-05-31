
#include <stdio.h>
int main() {
    int soma=0;
    int c=getchar();
    while (c!=EOF) {
        if (c!='+' && c!= '-' && c!=' ') {
            soma+=(c-'0');
        }
        else if (c=='+') {
            c=getchar();
            soma+=(c-'0');
        }
        else if (c=='-') {
            c=getchar();
            soma-=(c-'0');
        }
    }
    printf("%d",soma);
    return 0;
}