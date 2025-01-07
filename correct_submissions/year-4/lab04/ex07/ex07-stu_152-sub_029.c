

#include <stdio.h>
#include <string.h>

#define MAX 80

void apagaCaracter(char s[], char c){
    int i, j;
    for (i = 0; s[i] != '\0';){
        if (s[i] == c){
            for (j = i; s[j] != '\0'; j++)
                s[j] = s[j + 1];
        }
        else
            i++;

    }
}

int main(){
    char s[MAX], c;
    int i;

    for (i = 0; (c = getchar()) != '\n'; i++){
        s[i] = c;
    }
    s[i] = '\0';
    c =getchar();
    apagaCaracter(s,c);

    printf("%s\n",s);

    return 0;
}