
#include <stdio.h>
#define MAX 80





#include <stdio.h>
#include <string.h>

#define MAX 100

void leLinha(char seq[MAX]) {
    if (fgets(seq, MAX, stdin)) {  
        int len = strlen(seq);
        if (len > 0 && seq[len - 1] == '\n')  
            seq[len - 1] = '\0';  
    }
}

int main() {
    char seq[MAX];

    leLinha(seq);

    printf("%s\n", seq); 

    return 0;
}

