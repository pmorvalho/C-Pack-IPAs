

#include <stdio.h>
#include <string.h>

#define MAX 100

int is_pali(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i<j) {
        if (str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    char s[MAX];
    scanf("%s", s);
    if (is_pali(s))
        
        printf("yes\n");
    else
        printf("no\n");

    
    return 0;
}