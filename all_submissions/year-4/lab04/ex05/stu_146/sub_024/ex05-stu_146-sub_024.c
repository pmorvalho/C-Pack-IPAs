

#include <stdio.h>
#include <string.h>
#define MAX 1000

int leLinha(char s[]) {
    int i = 0;
    char c; 

    while ((c = getchar()) != EOF && c != '\n') { 
        s[i] = c; 
        i++;
    }
    s[i] = '\0'; 
    return i;
}

int main() {
    char s[MAX];
    leLinha(s);
    printf("%s\n", s); 
    return 0;
}