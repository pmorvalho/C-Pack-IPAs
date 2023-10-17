
#include <stdio.h>
#define MAX 80

int lelinha(char s[]){
    int i, c;
    for(i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

void maisculas(char s[]){
    int j;
    for(j = 0; s[j] != '\0'; j++){
        if (s[j] >= 97 && s[j] <= 122){
            s[j] -= 'a' - 'A'; 
        }
    }
}

int main(){
    char s[MAX];
    lelinha(s);
    maisculas(s);
    printf("%s\n", s);
    return 0;
}