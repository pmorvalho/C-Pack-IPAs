
#include <stdio.h>
#define MAX 80
void apagaCaracter(char s[], char c) {
    int i;
    for (i=0;s[i]!='\n' && s[i]!='\0';i++) {
        if (s[i]!=c) {
            printf("%c",s[i]);
        }
    }
}
int main() {
    char s[MAX];
    char c;
    fgets(s,MAX,stdin);
    scanf("%c",&c);
    apagaCaracter(s,c);
    return 0;
}