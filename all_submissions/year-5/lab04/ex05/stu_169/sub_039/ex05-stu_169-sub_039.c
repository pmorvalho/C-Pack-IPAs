

#include <stdio.h>
#define MAX 80

int main() {
    char seq[MAX];
    
    fgets(seq, MAX, stdin);

    printf("%s", seq);
}