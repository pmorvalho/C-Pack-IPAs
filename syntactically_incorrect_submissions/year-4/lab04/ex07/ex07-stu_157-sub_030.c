
#include <stdio.h>

void apagaCaracter(char s[], char a) {
    int i, j;

    
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        if (s[i] == a) {
            for (j = i; j < length; j++) {
                s[j] = s[j+1];
            }
            s[length - 1] = '\0'; 
            length--; 
            i--; 
        }
    }
}


int main(void) {
    char s[100];
    char c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    char a;
    scanf("%c", &a);
    apagaCaracter(s, a);
    printf("%s", s);


    return 0;
}