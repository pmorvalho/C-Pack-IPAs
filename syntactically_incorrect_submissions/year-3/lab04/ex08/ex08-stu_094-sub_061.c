

#include <stdio.h>

#define MAX 100

int leLinha (char n[]) {

    int c, i;

    for (i = 0; i < MAX && (c = getchar()) != '\n' && c != EOF && c != ' ' ; i++) {
        n[i] = c;
    }

    n[i] = '\0';
    return i;
}

char *compara(char n1[], char n2[]) {

    int i;

    for (i = 0; n1[i] != '\0' && n1[i] ==  n2[i]; i++) {
        if (n1[i] < n2[i]) 
            return n2;
        else
            return n1;
    }
}

int main () {
    
    char n1[MAX], n2[MAX];

    leLinha(n1);
    leLinha(n2);
    printf("%s\n", compara(n1, n2));
    return 0;
}