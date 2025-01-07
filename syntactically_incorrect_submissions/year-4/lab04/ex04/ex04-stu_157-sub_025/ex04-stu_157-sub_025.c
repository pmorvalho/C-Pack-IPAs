#include <stdio.h> 

#define MAX 80

int main(void) {
    char word[MAX], c;
    int i = 0;
    while ((c = getchar()) != '\n') {
        word[i++] = c;

    }


    int j;
    for (j = 0; j < i/2; j++) {
        int inverse = i - j - 1;
        if (word[j] != word[inverse]) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    
    return 0;
    
}