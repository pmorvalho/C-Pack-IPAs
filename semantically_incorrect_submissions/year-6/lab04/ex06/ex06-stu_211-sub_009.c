
#include <stdio.h>
#define MAX 80
void maiusculas(char s[]) {
    int i;
    char letra;
    for (i=0;s[i]!='\n' && s[i]!='\0';i++) {
        if (s[i]>='a' && s[i]<='z') {
            letra=s[i]-' ';
            printf("%c",letra);
        }
        else {
            printf("%c",s[i]);
        }
    }
}

int main() {
    char s[MAX];
    fgets(s,MAX,stdin);
    maiusculas(s);
    return 0;
}