#include <stdio.h>
#include <string.h>

#define DIM 80
#define PALINDROME 0
#define NON_PALINDROME 1

int main() {

    int i, len, middle, state = PALINDROME;
    char word[DIM];
    
    scanf("%s", word);

    len = strlen(word);
    middle = len/2;

    for (i = 0; i < middle; i++) {
        if (word[i] != word[len - 1-i]) {
            state = NON_PALINDROME;
            break;
        }
    }
    if (state == PALINDROME) 
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}