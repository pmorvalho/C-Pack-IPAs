

#include <stdio.h>

#define MAX 80

int main() {
    int len, i, palindromo = 1;
    char vec[MAX];

    scanf("%s", vec);
    for ( len = 0; vec[len] != '\0' ; len++);
    
    for ( i = 0; i < len; i++)
    {
        if (vec[i] >= 'A' && vec[i] <= 'Z')
            vec[i] += 'a' - 'A';
    }
    
    for (i = 0; i < len/2; i++)
    {
        if (vec[i] != vec[len - i - 1])
        {
            palindromo = 0;
            break;
        }
    }
    
    printf("%s", palindromo ? "yes\n" : "no\n");    
    
    return 0;
}