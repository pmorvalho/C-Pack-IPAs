

#include <stdio.h>

#define DIMMAX 100

int leLinha(char s[]) {
    int i=0, counter=0;
    while (s[i] != '\0') {
        ++counter;
        ++i;
    }
    return counter; 
}

int main() {
    char s[DIMMAX];
    int i, current;
    while ((current = getchar()) != EOF) {
        if (current == '\n') { break; }
        s[i] = current;
        printf("%c", s[i]);
        ++i;
    }
    leLinha(s);
    printf("\n");
return 0;
}