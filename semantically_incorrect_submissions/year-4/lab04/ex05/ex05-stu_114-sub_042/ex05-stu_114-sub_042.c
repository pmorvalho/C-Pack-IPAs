
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 800

int leLinha(char s[MAX_LENGTH]) {
    int i = 0;
    fgets(s, MAX_LENGTH, stdin);
    while(s[i] != '\n' && s[i] != '\0') {
        i++;
    }
    
    printf("%s", s);
    return i;
}

int main() {

    char s[MAX_LENGTH];    
    leLinha(s);
    return 0;
}
