
#include <stdio.h>
#include <string.h>
#define MAX 80

int palindromo(char str[]);
int palindromo(char str[]) {
    int l=0, r=strlen(str)-1;
    while (l<r) {
        if (str[l++] != str[r--]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[MAX];
    scanf("%s", word);
    printf("%s\n", palindromo(word)?"yes":"no");
}