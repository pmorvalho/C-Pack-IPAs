
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

int leLinha(char S[MAX_LENGTH]) {

    fgets(S, MAX_LENGTH, stdin);
    printf("%s", S);
    return 0;
}

int main() {

    char S[MAX_LENGTH];    
    leLinha(S);
    return 0;
}