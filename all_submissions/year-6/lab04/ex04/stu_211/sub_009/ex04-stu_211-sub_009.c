
#include <stdio.h>
int main() {
    #define MAX 80
    char s[MAX];
    int i,soma=0;
    scanf("%s", s);
    for (i=0;i>0;i++) {
        while (s[i]!='\n' && s[i]!=EOF) {
            soma++;
        }
    }
    if (soma<MAX) {
        for (i=0;i<soma;i++) {
            if (s[i]!=s[soma-i]) {
                printf("no\n");
                break;
            }
        }
        printf("yes\n");
    }
    return 0;
}