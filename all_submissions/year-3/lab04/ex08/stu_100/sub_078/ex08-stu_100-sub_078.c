

#include <stdio.h>

#define MAX 100

int leLinha(char s[]){
    int c, i = 0;

    while ( (c = getchar()) != EOF && c != ' ' && c != '\n' && i < MAX - 1)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main() {
    char n1[MAX], n2[MAX];
    int i, r;

    leLinha(n1);
    leLinha(n2);

    for ( i = 0; n1[i] != '\0' && n2[i] != '\0'; i++)
    {
        if (n1[i] > n2[i]) {
            r = 1;
        } else {
            r = 0;
        }
    }
    
    r ? printf("%s\n",n1) : printf("%s\n", n2);

    return 0;
}