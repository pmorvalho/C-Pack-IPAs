

#include <stdio.h>

#define MAX 80

int main() {
    int i, j, palindromo = 1;
    char vec[MAX];

    scanf("%s", vec);
    for ( i = 0; vec[i] != '\0' ; i++);
    for (j = 0; j < i/2 + 1; j++)
    {
        if (vec[j] != vec[i - j - 1]) {
            palindromo = 0;
            break;
        }
    }
    printf("%s", palindromo ? "yes\n" : "no\n");

    
    
    
    return 0;
}