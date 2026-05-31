
#include <stdio.h>
#include <string.h>
#define MAX 80
int main() {
    int ini, end;
    int e_palindromo = 1;
    char word[MAX];
    scanf("%s", word);
    end = strlen(word) - 1;
    ini = 0;
    while (ini < end) {
        if (word[ini] != word[end]) {
            e_palindromo = 0;
            break;
            }
            ini++;
            end--;
    }
    if (e_palindromo == 1) {
        printf("yes\n");}
    else {printf("no\n");}
    return 0;
}