
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 80

int is_pali(char s[]) {
    int j = strlen(s) - 1;
    int i = 0;
    while (i < j) {
        if (s[i++] != s[j--]) {
            return 0;
        }
    }
    return 1;

}


int main() {
    char s[MAX];

    scanf("%s", s);
    
    

    if (is_pali(s))
        printf("%s\n", "yes");
    else
        printf("%s\n", "no");

    return EXIT_SUCCESS; 
}