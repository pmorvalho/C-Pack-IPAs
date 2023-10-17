

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

int compara(char n1[], char n2[]) {

    int i;

    for (i = 0; n1[i] != '\0' && n1[i] ==  n2[i]; i++) {
        if (n2[i] > n1[i]) 
            return 2;
        else
            return 1;
    }
}

int main () {
    
    char n1[MAX], n2[MAX];

    leLinha(n1);
    leLinha(n2);
    if (compara(n1, n2) == 2)
        printf("%s\n", n2);
    else
        printf("%s\n", n1);
    return 0;
}