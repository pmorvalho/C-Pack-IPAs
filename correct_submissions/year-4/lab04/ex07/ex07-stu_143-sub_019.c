
#include <stdio.h>
#define MAX 80

int main(){

    char s[MAX], c;
    void apagaCaracter(char s[], char c);
    int leLinha();

    leLinha(s);
    c = getchar();    
    apagaCaracter(s, c);
    printf("%s\n", s);

    return 0;
}
void apagaCaracter( char s[], char c){

    int i = 0, j = 0;
    for ( i = 0, j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];    
    }
    s[j] = '\0';
    
}

int leLinha( char s[]){

    int c, i = 0;
    c = getchar();
    while (c != '\n' && c != EOF && i < MAX-1){
        s[i++] = c;
        c = getchar();
    }
    s[i] = '\0';
    return i;

}

