
#include <stdio.h>
#define MAX 80

int leLinha(char string[]) {
    int i, c;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++) {
        string[i] = c;
    }
    string[i] = '\0';
    return i;
}

int main(){
    char string[MAX];
    int count = leLinha(string);
    for (int i = 0; i < count; i++){
        if (string[i] >= 'a' && string[i] <= 'z'){
            string[i] -= 'a' - 'A';
        }
        putchar(string[i]);
    }
    putchar('\n');
    return 0;
}

