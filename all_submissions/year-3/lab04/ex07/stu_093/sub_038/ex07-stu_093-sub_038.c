
#include <stdio.h>
#define DIM 80

int leLinha(char s[]);
void apagaCaracter(char s[], char c);

void apagaCaracter(char s[], char c){
    
    int i, spaces = 0;

    for(i = 0; s[i] != '\0'; i++){
        s[i] = s[i + spaces];
        if(s[i] == c){
            spaces++;
            s[i] = s[i + spaces];
        }
    }

    s[i - spaces] = '\0';    
}

int leLinha(char s[]){

    int i;
    char c;

    for(i = 0; (c = getchar()) != '\n' && c != EOF; i++)
        s[i] = c;
    
    s[i] = '\0';

    return i;
}

int main(){

    char s[DIM];
    char c;

    leLinha(s);
    c = getchar();
    apagaCaracter(s, c);

    printf("%s\n", s);

    return 0;
}