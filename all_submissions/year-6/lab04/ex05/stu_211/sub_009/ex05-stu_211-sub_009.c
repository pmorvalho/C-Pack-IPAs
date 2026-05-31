
#include <stdio.h>
#define MAX 80
void leLinha(char s[]) {
    int i,soma=0;
    for (i=0;s[i]!='\n' && s[i]!='\0';i++) {
        if (s[i]!= ' ') {
            soma++;
            } 
        }
    printf("%d",soma);
}
int main() {
    char s[MAX];
    fgets(s,MAX,stdin);
    leLinha(s);
    return 0;
}