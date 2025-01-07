
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

int leLinha(char S[MAX_LENGTH]) {
    int i = 0;
    fgets(S, MAX_LENGTH, stdin);
    while(S[i] != '\n' && S[i] != '\0') {
        i++;
    }

    printf("%s", S);
    return i;
}

int main() {

    char S[MAX_LENGTH];    
    leLinha(S);
    return 0;
}


