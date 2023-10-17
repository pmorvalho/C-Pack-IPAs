
#include <stdio.h>

#define MAX 80

int leLinha(char s[]){
    int i, c;
    for(i = 0; i < MAX && ((c = getchar())!= '\n' && c != EOF); i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c){
    int i, dif = 0;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == c){
            dif++;
            s[i-dif] = s[i];

        }
    }
    s[i-dif]='\0';
}

int main(){
    char s[MAX], c;
    leLinha(s);    
    c = getchar();
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}