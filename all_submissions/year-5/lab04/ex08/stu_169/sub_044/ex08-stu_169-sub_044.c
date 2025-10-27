

#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char n1[MAX], n2[MAX];

    scanf("%s %s", n1, n2);

    if (strcmp(n1, n2) > 0) 
        printf("%s\n", n1);

    else
        printf("%s\n", n2);
    
    return 0;
}