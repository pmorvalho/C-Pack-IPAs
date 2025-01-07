
#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c){
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == c){
            for(int j = i; s[j] != '\0'; j++){
                s[j] = s[j + 1];
            }
        }
    }
}


int main(){
    char s[MAX];
    int c;

    fgets(s, MAX, stdin);
    c = getchar();

    apagaCaracter(s, c);

    printf("%s\n", s);
    return 0;
}