
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

int leLinha(char s[MAX_LENGTH]) {
    int i = 0;
    fgets(s, MAX_LENGTH, stdin);

    for (i = 0; s[i] != '\0'; i++) {

        if (s[i] == '\n') {
            s[i + 1] = '\0';
        }

    }

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

